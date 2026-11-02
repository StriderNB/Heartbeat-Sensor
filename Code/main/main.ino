#include <SPI.h>
#include <TFT_eSPI.h>

TFT_eSPI tft = TFT_eSPI();
TFT_eSprite radarBuf = TFTeSprite(&tft);

#define POT 4
#define TFT_BL 5
#define RADAR_RX 43
#define RADAR_TX 44
#define RADAR_BAUD 256000

#define PWM_FREQ 5000
#define PWN_RES 8

int targetX = 0;
int targetY = 0;
int targetSpeed = 0;
bool targetDetected = false;

void setup() {
  Serial.begin(115200);
  Serial.begin(RADAR_BAUD, SERIAL_8N1, RADAR_RX, RADAR_TX);

  ledcAttatch(TFT_BL, PWM_FREQ, PWM_RES);
  ledcWrite(TFT_BL, 128);

  tft.init();
  tft.setRotation(1);
  tft.fillScreen(TFT_BLACK);
  radarBuf.createSprite(320,240);
}

void readRadarData() {
 while (Serial1.available() >= 10) {
    if (Serial1.read() == 0xAA) {
      if (Serial1.read() == 0xFF) {
        uint8_t xLow = Serial1.read();
        uint8_t xHigh = Serial1.read();
        uint8_t yLow = Serial1.read();
        uint8_t yHigh = Serial1.read();
        uint8_t speedLow = Serial1.read();
        uint8_t speedHigh = Serial1.read();
        
        int16_t rawX = (xHigh << 8) | xLow;
        int16_t rawY = (yHigh << 8) | yLow;
        int16_t rawSpeed = (speedHigh << 8) | speedLow;
        
        if (Serial2.read() == 0x55 && Serial2.read() == 0xCC) { // Frame tail verification
          targetX = rawX & 0x7FFF; 
          if (rawX & 0x8000) targetX = -targetX; 
          
          targetY = rawY & 0x7FFF;
          targetSpeed = rawSpeed & 0x7FFF;
          if (rawSpeed & 0x8000) targetSpeed = -targetSpeed;

          targetDetected = (targetY > 0);
        }
      }
    }
}

void loop() {
  int brightness = constrain((analogRead(POT) >> 4), 15, 255);
  ledcWrite(TFT_BL, brightness);

  readRadarData();

  radarBuf.fillSprite(TFT_BLACK);

  radarBuf.drawCircle(160, 240, 70, TFT_DARKGREEN);
  radarBuf.drawCircle(160, 240, 140, TFT_DARKGREEN);
  radarBuf.drawCircle(160, 240, 210, TFT_DARKGREEN);
  radarBuf.drawLine(160, 240, 40, 40, TFT_DARKGREEN);
  radarBuf.drawLine(160, 240, 280, 40, TFT_DARKGREEN);

  if (targetDetected) {
    int mapX = 160 + (targetX / 20);
    int mapY = 240 + (targetX / 20);
    mapX = constrain(mapX, 0, 320);
    mapY = constrain(mapY, 0, 240);

    radarBuf.fillCircle(mapX, mapY, 8, TFT_RED);
    radarBuf.drawCircle(mapX, mapY, 14, TFT_MAROON);

    radarBuf.setTextColor(TFT_WHITE);
    radarBuf.drawString("Y: " + String(targetY) + "m", 10, 30, 2);
    radarBuf.drawString("Speed: " + String(targetSpeed) + "m/s");
  }

  radar.drawString("BL:" + String((brightness * 100) / 255) + "%", 260, 10, 2);

  radarBuf.pushSprite(0, 0);

  delay(25);
}
