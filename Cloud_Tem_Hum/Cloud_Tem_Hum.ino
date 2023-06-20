#define BLYNK_PRINT Serial

#define BLYNK_TEMPLATE_ID "TMPL3bkAdwI6D"
#define BLYNK_TEMPLATE_NAME "Temperature and Humidity"
#define BLYNK_AUTH_TOKEN "nDDB5IFWTBWkpi6KHWnJTFPOCuvWmjTA"


#include <WiFi.h>
#include <WifiClient.h>
#include <BlynkSimpleEsp32.h>

char auth[] = BLYNK_AUTH_TOKEN;
//Your Wifi credentials.
//Set password to ""for open networks.
char ssid[] = "user_wifi_name";
char pass[] = "*******";
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
  Serial.println("Connection Error, Please Check");
  return;
  
}

Serial.print("TEMPERATURE : ");
Serial.print(temp);
Serial.print("  °C  ");
Serial.print("HUMIDITY : ");
Serial.print(hum);
Serial.println("  % RH  ");
Blynk.virtualWrite(V2, temp);
Blynk.virtualWrite(V3, hum);
}
