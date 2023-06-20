#define BLYNK_PRINT Serial

#define BLYNK_TEMPLATE_ID                        "TMPxxxxxx"
#define BLYNK_TEMPLATE_NAME                      "Device"
#define BLYNK_AUTH_TOKEN                         "YourAuthToken"


#include <WiFi.h>
#include <WifiClient.h>
#include <BlynkSimpleEsp32.h>

char auth[] = BLYNK_AUTH_TOKEN;
//Your Wifi credentials.
//Set password to ""for open networks.
char ssid[] = "YourNetworkName";
char pass[] = "YourPassword";
BlynkTimer timer;

void setup()
{
// Debug Console
Serial.begin(9600);

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
  Blynk.virtualWrite(V0, Variable);
}
