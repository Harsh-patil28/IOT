#define BLYNK_PRINT Serial

#define BLYNK_TEMPLATE_ID "TMPL3bkAdwI6D"
#define BLYNK_TEMPLATE_NAME "Temperature and Humidity"
#define BLYNK_AUTH_TOKEN "nDDB5IFWTBWkpi6KHWnJTFPOCuvWmjTA"


#include <WiFi.h>
#include <WifiClient.h>
#include <BlynkSimpleEsp32.h>

#include <Adafruit_GFX.h>
#include <Adafruit_ST7735.h>
#include <SPI.h>

#define TFT_CS     12
#define TFT_RST    14
#define TFT_DC     13
#define TFT_SCLK   22
#define TFT_MOSI   21
Adafruit_ST7735 tft  = Adafruit_ST7735(TFT_CS, TFT_DC, TFT_MOSI, TFT_SCLK, TFT_RST);

char auth[] = BLYNK_AUTH_TOKEN;
//Your Wifi credentials.
//Set password to ""for open networks.
char ssid[] = "user_wifi_name";
char pass[] = "******";
BlynkTimer timer;

#include "DHT.h"
#define DHTPIN 4
#define DHTTYPE DHT11
//#define DHTTYPE DHT22
DHT dht11(DHTPIN,DHTTYPE);

void setup()
{
// Debug Console
dht11.begin();
Serial.begin(9600);
Serial.println("DHTxx test!");

Blynk.begin(BLYNK_AUTH_TOKEN, ssid, pass);
timer.setInterval(1000L, sendSensor);

Serial.begin(115200);
Serial.print("ST7735 TFT grafics test");
tft.initR(INITR_BLACKTAB);
Serial.println("Initializing.....");
tft.setTextWrap(true);

}

void loop()
{
  Blynk.run();
timer.run();
}

void sendSensor()
{
    delay(2000);
float temp = dht11.readTemperature();
float hum = dht11.readHumidity();

if(isnan(temp) || isnan(hum))
{
  tft.println("Connection Error, Please Check");
  return;
  
}

tft.fillScreen(ST7735_YELLOW);
tft.setCursor(0, 0);
tft.setTextColor(ST7735_BLACK);
tft.setTextSize(2);
tft.print("TEMPERATURE : ");
tft.print(temp);
tft.print("  °C  ");
tft.setTextColor(ST7735_BLACK);
tft.setTextSize(2);
tft.print("HUMIDITY : ");
tft.print(hum);
tft.println("  % RH  ");
Blynk.virtualWrite(V2, temp);
Blynk.virtualWrite(V3, hum);
}
