#include <SPI.h>
#include <TFT_eSPI.h>

TFT_eSPI tft = TFT_eSPI();
TFT_eSprite radarBuf = TFT_eSprite(&tft);

#define POT 4
#define TFT_BL 5
#define RADAR_RX 43
#define RADAR_TX 44
#define MY_RADAR_BAUD 256000

#define PWM_FREQ 5000
#define PWM_RES 8

int targetX = 0;
int targetY = 0;
int targetSpeed = 0;
bool targetDetected = false;

void setup() {
  Serial.begin(115200);
  Serial1.begin(MY_RADAR_BAUD, SERIAL_8N1, RADAR_RX, RADAR_TX);

  ledcAttach(TFT_BL, PWM_FREQ, PWM_RES);
  ledcWrite(TFT_BL, 128);

  tft.init();
  tft.setRotation(1);
  tft.fillScreen(TFT_BLACK);
  radarBuf.createSprite(320,240);
}

void readRadarData() {
  // The HLK-LD2450 target frame packet length is exactly 10 bytes long
  while (Serial1.available() >= 10) {
    // Peek ahead to check the header; skips bad data bytes to prevent frame shifting
    if (Serial1.peek() != 0xAA) {
      Serial1.read(); 
      continue;
    }

    // Safely parse the header once the 10-byte block is confirmed complete
    uint8_t headerL = Serial1.read();
    uint8_t headerH = Serial1.peek(); // Peek ahead for second header byte
    
    if (headerH == 0xFF) {
      Serial1.read(); // Consume the confirmed 0xFF byte

      // Read the 6 payload tracking bytes securely
      uint8_t xLow = Serial1.read();
      uint8_t xHigh = Serial1.read();
      uint8_t yLow = Serial1.read();
      uint8_t yHigh = Serial1.read();
      uint8_t speedLow = Serial1.read();
      uint8_t speedHigh = Serial1.read();
      
      // Read final frame verification tail bytes
      uint8_t tailL = Serial1.read();
      uint8_t tailH = Serial1.read();
      
      if (tailL == 0x55 && tailH == 0xCC) {
        int16_t rawX = (xHigh << 8) | xLow;
        int16_t rawY = (yHigh << 8) | yLow;
        int16_t rawSpeed = (speedHigh << 8) | speedLow;
        
        // Handle coordinates and distance polarity 
        targetX = rawX & 0x7FFF; 
        if (rawX & 0x8000) targetX = -targetX; 
        
        targetY = rawY & 0x7FFF;
        targetSpeed = rawSpeed & 0x7FFF;
        if (rawSpeed & 0x8000) targetSpeed = -targetSpeed;

        targetDetected = (targetY > 0);
      }
    } else {
      // Clear out incorrect byte alignment 
      Serial1.read();
    }
  }
}

void loop() {
  // Set brightness
  int brightness = constrain((analogRead(POT) >> 4), 15, 255);
  ledcWrite(TFT_BL, brightness);

  readRadarData();

  radarBuf.fillSprite(TFT_BLACK);

  // Draw rings
  radarBuf.drawCircle(160, 240, 70, TFT_DARKGREEN);
  radarBuf.drawCircle(160, 240, 140, TFT_DARKGREEN);
  radarBuf.drawCircle(160, 240, 210, TFT_DARKGREEN);
  radarBuf.drawLine(160, 240, 40, 40, TFT_DARKGREEN);
  radarBuf.drawLine(160, 240, 280, 40, TFT_DARKGREEN);

  if (targetDetected) {
    int mapX = 160 + (targetX / 20);
    int mapY = 240 - (targetY / 20);
    mapX = constrain(mapX, 0, 320);
    mapY = constrain(mapY, 0, 240);

    // Render target
    radarBuf.fillCircle(mapX, mapY, 8, TFT_RED);
    radarBuf.drawCircle(mapX, mapY, 14, TFT_MAROON);

    // Overlay position and speed
    radarBuf.setTextColor(TFT_WHITE, TFT_BLACK);
    radarBuf.drawString("Y: " + String(targetY) + "mm", 10, 30, 2);
    radarBuf.drawString("Speed: " + String(targetSpeed) + "cm/s", 10, 50, 2);
  }

  // Overlay brightness percentage
  radarBuf.drawString("BL:" + String((brightness * 100) / 255) + "%", 260, 10, 2);

  radarBuf.pushSprite(0, 0);

  delay(30);
}
