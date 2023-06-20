#define red 4
#define blue 16
#define green 17
void setup() {
pinMode(red,OUTPUT);
pinMode(blue,OUTPUT);
pinMode(green,OUTPUT);
}

void loop() {
  RED();
  YELLOW();
  GREEN();
}

void RED() {
digitalWrite(red,HIGH);
delay(5000);
digitalWrite(red,LOW);
}

void YELLOW() {
digitalWrite(red,HIGH);
digitalWrite(blue,HIGH);
digitalWrite(green,LOW);
delay(5000);
digitalWrite(red,LOW);
digitalWrite(blue,LOW);
digitalWrite(green,LOW);
}

void GREEN() {
digitalWrite(green,HIGH);
delay(10000);
digitalWrite(green,LOW);
}
