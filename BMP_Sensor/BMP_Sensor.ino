
#include <Adafruit_I2CDevice.h>
#include <Adafruit_BMP085.h>

Adafruit_BMP085 BMP085;

void setup() {
  Serial.begin(9600);
  BMP085.begin();
  }

void loop() {
  float p = BMP085.readPressure();
  float t = BMP085.readTemperature();
  Serial.println("Pressure: ");
  Serial.println(p);
  Serial.println("Temperature: ");
  Serial.println(t);
  delay(2000);
}
