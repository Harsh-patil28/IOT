#include "DHT.h"
#define DHTPIN 4
#define DHTTYPE DHT11
//#define DHTTYPE DHT22
DHT dht11(DHTPIN,DHTTYPE);

void setup() {
  // put your setup code here, to run once:
dht11.begin();
Serial.begin(9600);
Serial.println("DHT SENSOR INITIALIZED");

}

void loop() {
  // put your main code here, to run repeatedly:
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
}
