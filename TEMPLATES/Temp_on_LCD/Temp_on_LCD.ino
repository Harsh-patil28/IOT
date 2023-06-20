#include "DHT.h"
#define DHTPIN 4
#define DHTTYPE DHT11

#include <Adafruit_GFX.h>
#include <Adafruit_ST7735.h>
#include <SPI.h>

#define TFT_CS     12
#define TFT_RST    14
#define TFT_DC     13
#define TFT_SCLK   22
#define TFT_MOSI   21
Adafruit_ST7735 tft  = Adafruit_ST7735(TFT_CS, TFT_DC, TFT_MOSI, TFT_SCLK, TFT_RST);

DHT dht(DHTPIN, DHTTYPE);

void setup() {
  dht.begin();
Serial.begin(115200);
Serial.print("ST7735 TFT grafics test");
tft.initR(INITR_BLACKTAB);
Serial.println("Initializing.....");
tft.setTextWrap(true);

}
void loop() {
    delay(2000);

  float h = dht.readHumidity();

  float t = dht.readTemperature();
  
  tft.fillScreen(ST7735_BLACK);
  tft.setCursor(1, 0);
  tft.println("Humidity:");
  tft.setTextColor(ST7735_GREEN);  
  tft.setTextSize(2);
  tft.print(h);
  tft.println("%");
  tft.print("Temperature:");
  tft.setTextColor(ST7735_GREEN);
  tft.setTextSize(2);
  tft.print(t);
  tft.print("°C");
  
}
