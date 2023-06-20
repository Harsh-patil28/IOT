#include <Adafruit_GFX.h>
#include <Adafruit_ST7735.h>
#include <SPI.h>

#define TFT_CS     12
#define TFT_RST    14
#define TFT_DC     13
#define TFT_SCLK   22
#define TFT_MOSI   21
Adafruit_ST7735 tft  = Adafruit_ST7735(TFT_CS, TFT_DC, TFT_MOSI, TFT_SCLK, TFT_RST);

void setup(void) {
Serial.begin(115200);
Serial.print("ST7735 TFT grafics test");
tft.initR(INITR_BLACKTAB);
Serial.println("Initializing.....");
tft.setTextWrap(true);

}

void loop() {
tft.fillScreen(ST7735_BLACK);
tft.setCursor(0, 0);
tft.setTextColor(ST7735_RED);
tft.setTextSize(3);
tft.println("JAI");
delay(2000);
tft.setTextColor(ST7735_RED);
tft.setTextSize(3);
tft.println("SHREE");
delay(2000);
tft.setTextColor(ST7735_RED);
tft.setTextSize(3);
tft.println("RAM");
delay(2000);

}