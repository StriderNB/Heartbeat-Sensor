# Heartbeat-Sensor
<img width="1031" height="965" alt="Screenshot 2026-11-01 213512" src="https://github.com/user-attachments/assets/88af8403-90a8-4cc3-ae35-8be01cb4d5cc" />
An MW2 Inspired heartbeat sensor

# Features
XIAO-ESP32-S3

24G HLK-LD2450 Radar Sensor

ST7789V 2.8 Inch SPI Display

Rechargeable 3.7V LiPo Battery

Brightness control

On and off switch

# Wiring
All connections are visible in image of schematic at bottom of page. It's currently designed to be wired by hand, but can be easily adapted to fit on a pcb.

# Software
Requires TFT_eSPI.h by Bodmer and SPI.h libraries

# BOM
| Item | Qty | Supplier | Cost/item | Total Cost | Link |
| :--- | :---: | :--- | :---: | :---: | :--- |
| XIAO-ESP32-S2 | 1 | Aliexpress | $9.63 | $9.63 | [Link](https://www.aliexpress.us/item/3256806801590776.html?spm=a2g0o.cart.0.0.541338da47ZNNX&mp=1&pdp_npi=6%40dis%21USD%21USD+56.03%21USD+9.63%21%21USD+9.63%21%21%21%40210311c217935924233951417e0ef1%2112000056625194548%21ct%21US%218321405938%21%211%210%21&_gl=1*qjvvj7*_gcl_aw*R0NMLjE3OTM0Njg0NzEuQ2p3S0NBandvNWJYQmhBRUVpd0FrZ3BnWEJoUkpkZlh0UVZka2ZmbUI5T204eENyeVA5OFlobmhhVWVjYlFVcWRmaWFiNW9QbjdGQTBSb0NnMThRQXZEX0J3RQ..*_gcl_dc*R0NMLjE3OTM0Njg0NzEuQ2p3S0NBandvNWJYQmhBRUVpd0FrZ3BnWEJoUkpkZlh0UVZka2ZmbUI5T204eENyeVA5OFlobmhhVWVjYlFVcWRmaWFiNW9QbjdGQTBSb0NnMThRQXZEX0J3RQ..*_gcl_au*MjEyNDg5MTc2NC4xNzkwNTM4MDQ3*_ga*NzA2MzgzNDcwLjE3OTMxNDk0MDY.*_ga_VED1YSGNC7*czE3OTM1OTA4ODIkbzE2JGcxJHQxNzkzNTkyMzA4JGoxNCRsMCRoMA..&gatewayAdapt=glo2usa) |
| 35mm 20k Potentiometer Slider | 1 | AliExpress | $2.96 | $2.96 | [Link](https://www.aliexpress.us/item/3256808527031041.html?spm=a2g0o.cart.0.0.6eb838daCB40T6&mp=1&pdp_npi=6%40dis%21USD%21USD+3.00%21USD+2.75%21%21USD+2.75%21%21%21%40210311c217935923455405476e0ef1%2112000046545295125%21ct%21US%218321405938%21%212%210%21&_gl=1*1s7wowk*_gcl_aw*R0NMLjE3OTM0Njg0NzEuQ2p3S0NBandvNWJYQmhBRUVpd0FrZ3BnWEJoUkpkZlh0UVZka2ZmbUI5T204eENyeVA5OFlobmhhVWVjYlFVcWRmaWFiNW9QbjdGQTBSb0NnMThRQXZEX0J3RQ..*_gcl_dc*R0NMLjE3OTM0Njg0NzEuQ2p3S0NBandvNWJYQmhBRUVpd0FrZ3BnWEJoUkpkZlh0UVZka2ZmbUI5T204eENyeVA5OFlobmhhVWVjYlFVcWRmaWFiNW9QbjdGQTBSb0NnMThRQXZEX0J3RQ..*_gcl_au*MjEyNDg5MTc2NC4xNzkwNTM4MDQ3*_ga*NzA2MzgzNDcwLjE3OTMxNDk0MDY.*_ga_VED1YSGNC7*czE3OTM1OTA4ODIkbzE2JGcxJHQxNzkzNTkyMjI4JGozNCRsMCRoMA..&gatewayAdapt=glo2usa) |
| 24G HLK-LD2450 | 1 | AliExpress | $6.15 | $6.15 | [Link](https://www.aliexpress.us/item/3256805935608347.html?spm=a2g0o.cart.0.0.597738da8YWaIu&mp=1&pdp_npi=6%40dis%21USD%21USD+6.15%21USD+1.09%21%21USD+1.09%21%21%21%40210311c217935922787962724e0ef1%2112000035851121206%21ct%21US%218321405938%21%211%210%21&_gl=1*p4p9qr*_gcl_aw*R0NMLjE3OTM0Njg0NzEuQ2p3S0NBandvNWJYQmhBRUVpd0FrZ3BnWEJoUkpkZlh0UVZka2ZmbUI5T204eENyeVA5OFlobmhhVWVjYlFVcWRmaWFiNW9QbjdGQTBSb0NnMThRQXZEX0J3RQ..*_gcl_dc*R0NMLjE3OTM0Njg0NzEuQ2p3S0NBandvNWJYQmhBRUVpd0FrZ3BnWEJoUkpkZlh0UVZka2ZmbUI5T204eENyeVA5OFlobmhhVWVjYlFVcWRmaWFiNW9QbjdGQTBSb0NnMThRQXZEX0J3RQ..*_gcl_au*MjEyNDg5MTc2NC4xNzkwNTM4MDQ3*_ga*NzA2MzgzNDcwLjE3OTMxNDk0MDY.*_ga_VED1YSGNC7*czE3OTM1OTA4ODIkbzE2JGcxJHQxNzkzNTkyMTY0JGozNiRsMCRoMA..&gatewayAdapt=glo2usa) |
| 3.7V LiPo Battery | 1 | AliExpress | $4.75 | $4.75 | [Link](https://www.aliexpress.us/item/3256808033130350.html?spm=a2g0o.cart.0.0.345338dah4GBOJ&mp=1&pdp_npi=6%40dis%21USD%21USD+11.32%21USD+5.66%21%21USD+5.66%21%21%21%402101de2517934123247658089e1099%2112000044276127880%21ct%21US%218321405938%21%211%210%21&_gl=1*1trtvm4*_gcl_aw*R0NMLjE3OTM0MTIyMTMuQ2p3S0NBandnSkhYQmhCR0Vpd0FIb2hKcXhsWXZpOWpkaXdQaUxUQnpMbGxGVE14SVpLNHJvN2dXUmZEeFFQelQ3NVBFeGgtOU9ZSUVCb0NRSUFRQXZEX0J3RQ..*_gcl_dc*R0NMLjE3OTM0MTIyMTMuQ2p3S0NBandnSkhYQmhCR0Vpd0FIb2hKcXhsWXZpOWpkaXdQaUxUQnpMbGxGVE14SVpLNHJvN2dXUmZEeFFQelQ3NVBFeGgtOU9ZSUVCb0NRSUFRQXZEX0J3RQ..*_gcl_au*MjEyNDg5MTc2NC4xNzkwNTM4MDQ3*_ga*NzA2MzgzNDcwLjE3OTMxNDk0MDY.*_ga_VED1YSGNC7*czE3OTM0MTE5NzkkbzEwJGcxJHQxNzkzNDEyMjEyJGo1OCRsMCRoMA..&gatewayAdapt=glo2usa) |
| ST7789V 2.8 Inch SPI Serial Display | 1 | AliExpress | $5.76 | $5.76 | [Link](https://www.aliexpress.us/item/3256804371601818.html?spm=a2g0o.cart.0.0.597738daurL5Pt&mp=1&pdp_npi=6%40dis%21USD%21USD+5.76%21USD+2.76%21%21USD+2.76%21%21%21%402101de2517933075277234216e0f4f%2112000056542446061%21ct%21US%218321405938%21%211%210%21&_gl=1*2rb8zi*_gcl_aw*R0NMLjE3OTMzMDczOTQuQ2p3S0NBandsNEhYQmhBakVpd0FIbHBXaEdldGdTaDRVVXMtYVE1ckwyaFpTQkIzNkZNXzEzUXJQS1F4bFhMVDBMbHVxaWNhRUtTbG9Cb0NEY2dRQXZEX0J3RQ..*_gcl_dc*R0NMLjE3OTMzMDczOTQuQ2p3S0NBandsNEhYQmhBakVpd0FIbHBXaEdldGdTaDRVVXMtYVE1ckwyaFpTQkIzNkZNXzEzUXJQS1F4bFhMVDBMbHVxaWNhRUtTbG9Cb0NEY2dRQXZEX0J3RQ..*_gcl_au*MjEyNDg5MTc2NC4xNzkwNTM4MDQ3*_ga*NzA2MzgzNDcwLjE3OTMxNDk0MDY.*_ga_VED1YSGNC7*czE3OTMzMDcxODIkbzgkZzEkdDE3OTMzMDc0MTckajUwJGwwJGgw&gatewayAdapt=glo2usa) |
| 5V DC-DC Step-Up Power Module | 1 | AliExpress | $2.83 | $2.83 | [Link](https://www.aliexpress.us/item/3256805438663158.html?spm=a2g0o.cart.0.0.597738daurL5Pt&mp=1&pdp_npi=6%40dis%21USD%21USD+2.83%21USD+1.09%21%21USD+1.09%21%21%21%402101de2517933075277234216e0f4f%2112000043421985868%21ct%21US%218321405938%21%211%210%21&_gl=1*1nhnar5*_gcl_aw*R0NMLjE3OTMzMDczOTQuQ2p3S0NBandsNEhYQmhBakVpd0FIbHBXaEdldGdTaDRVVXMtYVE1ckwyaFpTQkIzNkZNXzEzUXJQS1F4bFhMVDBMbHVxaWNhRUtTbG9Cb0NEY2dRQXZEX0J3RQ..*_gcl_dc*R0NMLjE3OTMzMDczOTQuQ2p3S0NBandsNEhYQmhBakVpd0FIbHBXaEdldGdTaDRVVXMtYVE1ckwyaFpTQkIzNkZNXzEzUXJQS1F4bFhMVDBMbHVxaWNhRUtTbG9Cb0NEY2dRQXZEX0J3RQ..*_gcl_au*MjEyNDg5MTc2NC4xNzkwNTM4MDQ3*_ga*NzA2MzgzNDcwLjE3OTMxNDk0MDY.*_ga_VED1YSGNC7*czE3OTMzMDcxODIkbzgkZzEkdDE3OTMzMDc4NjIkajU4JGwwJGgw&gatewayAdapt=glo2usa) |
| 50V 10uF Capacitor | 40 | AliExpress | $0.02 | $2.89 | [Link](https://www.aliexpress.us/item/3256811445656016.html?spm=a2g0o.cart.0.0.7ede38daeO72gH&mp=1&pdp_npi=6%40dis%21USD%21USD+2.88%21USD+1.09%21%21USD+1.09%21%21%21%402101e5ab17933132983857097e0ffd%2112000056427936765%21ct%21US%218321405938%21%211%210%21&_gl=1*6ewfz2*_gcl_aw*R0NMLjE3OTMzMTIxODIuQ2owS0NRanczWXZYQmhDREFSSXNBS0Itb3gtMmxIRjZYUWRQeG90UnAydFlFdEZseXA2OU1EdXl5RUlyVDJDUl81eWJKV2prc1FOdFlSMGFBbFVBRUFMd193Y0I.*_gcl_dc*R0NMLjE3OTMzMTIxODIuQ2owS0NRanczWXZYQmhDREFSSXNBS0Itb3gtMmxIRjZYUWRQeG90UnAydFlFdEZseXA2OU1EdXl5RUlyVDJDUl81eWJKV2prc1FOdFlSMGFBbFVBRUFMd193Y0I.*_gcl_au*MjEyNDg5MTc2NC4xNzkwNTM4MDQ3*_ga*NzA2MzgzNDcwLjE3OTMxNDk0MDY.*_ga_VED1YSGNC7*czE3OTMzMDcxODIkbzgkZzEkdDE3OTMzMTMxOTckajQ3JGwwJGgw&gatewayAdapt=glo2usa) |
| 50V 100nF Capacitor | 100 | AliExpress | $0.02 | $2.15 | [Link](https://www.aliexpress.us/item/3256804202811504.html?spm=a2g0o.productlist.main.47.1c4e74c0l1XThG&algo_pvid=dd10d1d4-cb49-45f4-acef-9f18dc0db9b3&algo_exp_id=dd10d1d4-cb49-45f4-acef-9f18dc0db9b3-46&pdp_ext_f=%7B%22order%22%3A%22468%22%2C%22eval%22%3A%221%22%2C%22fromPage%22%3A%22search%22%7D&pdp_npi=6%40dis%21USD%212.15%211.09%21%21%212.15%211.09%21%402103081117933129342097930e0ce6%2112000029007429977%21sea%21US%218321405938%21ABX%211%210%21n_tag%3A-29910%3Bd%3Ad88495b%3Bm03_new_user%3A-29895%3BpisId%3A5000000218165391&curPageLogUid=N2nd954ygKKL&utparam-url=scene%3Asearch%7Cquery_from%3A%7Cx_object_id%3A1005004389126256%7C_p_origin_prod%3A) |
| SPDT Toggle Switch | 20 | PCBWay | $0.10 | $2.04 | [Link](https://www.aliexpress.us/item/3256809760123375.html?spm=a2g0o.cart.0.0.7ede38daeO72gH&mp=1&pdp_npi=6%40dis%21USD%21USD+2.04%21USD+1.09%21%21USD+1.09%21%21%21%402101e5ab17933132983857097e0ffd%2112000050651923109%21ct%21US%218321405938%21%211%210%21&_gl=1*p4s25n*_gcl_aw*R0NMLjE3OTMzMTIxODIuQ2owS0NRanczWXZYQmhDREFSSXNBS0Itb3gtMmxIRjZYUWRQeG90UnAydFlFdEZseXA2OU1EdXl5RUlyVDJDUl81eWJKV2prc1FOdFlSMGFBbFVBRUFMd193Y0I.*_gcl_dc*R0NMLjE3OTMzMTIxODIuQ2owS0NRanczWXZYQmhDREFSSXNBS0Itb3gtMmxIRjZYUWRQeG90UnAydFlFdEZseXA2OU1EdXl5RUlyVDJDUl81eWJKV2prc1FOdFlSMGFBbFVBRUFMd193Y0I.*_gcl_au*MjEyNDg5MTc2NC4xNzkwNTM4MDQ3*_ga*NzA2MzgzNDcwLjE3OTMxNDk0MDY.*_ga_VED1YSGNC7*czE3OTMzMDcxODIkbzgkZzEkdDE3OTMzMTMxODckajU3JGwwJGgw&gatewayAdapt=glo2usa) |
| Estimated total shipping | 1 | | | $9.83 | |
| TOTAL  |  | | | $47.87 | |

# More Images
<img width="1506" height="755" alt="Screenshot 2026-11-01 213412" src="https://github.com/user-attachments/assets/c2db5e41-115f-4972-b4d1-01c95eda2c18" />
<img width="1214" height="836" alt="Screenshot 2026-11-01 213437" src="https://github.com/user-attachments/assets/5b2c5da9-e3ac-4b32-80b8-f91a99e886c3" />
<img width="1125" height="741" alt="Screenshot 2026-11-01 213613" src="https://github.com/user-attachments/assets/33d3df19-21a2-4cec-980c-1e9cbfe3c69d" />
<img width="1018" height="962" alt="Screenshot 2026-11-01 213536" src="https://github.com/user-attachments/assets/c088a415-4ca8-4185-8ace-8b7920756fe4" />
