#include <SPI.h>
#include <RF24.h>
#include <ELECHOUSE_CC1101_SRC_DRV.h>
#include <Adafruit_GFX.h>
#include <Adafruit_ST7735.h>

// ---------- SPI PINS ----------
#define MOSI 11
#define MISO 13
#define SCK  12

// ---------- NRF24 ----------
RF24 radio1(4, 5);   // CE, CSN
RF24 radio2(7, 6);   // CE, CSN

// ---------- CC1101 ----------
#define CC1_CS 15
#define CC2_CS 16

// ---------- DISPLAY ----------
#define TFT_CS   10
#define TFT_DC   9
#define TFT_RST  8

Adafruit_ST7735 tft = Adafruit_ST7735(TFT_CS, TFT_DC, TFT_RST);

void setup() {

  Serial.begin(115200);
  delay(2000);

  SPI.begin(SCK, MISO, MOSI);

  Serial.println("=== TEST SISTEMA ===");

  // ---------- DISPLAY ----------
  tft.initR(INITR_BLACKTAB);
  tft.fillScreen(ST77XX_BLACK);
  tft.setTextColor(ST77XX_GREEN);
  tft.setTextSize(1);
  tft.setCursor(0, 0);
  tft.println("BOOT OK");

  // ---------- NRF24 #1 ----------
  tft.println("NRF24 #1...");
  if (radio1.begin()) {
    tft.println("OK");
    Serial.println("NRF24 #1 OK");
  } else {
    tft.println("FAIL");
    Serial.println("NRF24 #1 FAIL");
  }

  // ---------- NRF24 #2 ----------
  tft.println("NRF24 #2...");
  if (radio2.begin()) {
    tft.println("OK");
    Serial.println("NRF24 #2 OK");
  } else {
    tft.println("FAIL");
    Serial.println("NRF24 #2 FAIL");
  }

  // ---------- CC1101 #1 ----------
  tft.println("CC1101 #1...");
  ELECHOUSE_cc1101.setSpiPin(SCK, MISO, MOSI, CC1_CS);
  if (ELECHOUSE_cc1101.getCC1101()) {
    tft.println("OK");
    Serial.println("CC1101 #1 OK");
  } else {
    tft.println("FAIL");
    Serial.println("CC1101 #1 FAIL");
  }

  // ---------- CC1101 #2 ----------
  tft.println("CC1101 #2...");
  ELECHOUSE_cc1101.setSpiPin(SCK, MISO, MOSI, CC2_CS);
  if (ELECHOUSE_cc1101.getCC1101()) {
    tft.println("OK");
    Serial.println("CC1101 #2 OK");
  } else {
    tft.println("FAIL");
    Serial.println("CC1101 #2 FAIL");
  }

  tft.println("TEST COMPLETATO");
}

void loop() {
  // lampeggio per dimostrare che MCU è attivo
  static bool toggle = false;
  toggle = !toggle;

  if (toggle)
    tft.fillRect(100, 120, 20, 20, ST77XX_RED);
  else
    tft.fillRect(100, 120, 20, 20, ST77XX_BLACK);

  delay(500);
}
