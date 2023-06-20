#define red=17
#define blue=green
#define green=18

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

  pinMode(red,OUTPUT);
  pinMode(blue,OUTPUT);
  pinMode(green,OUTPUT);

}

void loop()
 {
  // put your main code here, to run repeatedly:
  digitalWrite(red,HIGH);
  digitalWrite(blue,LOW);
  digitalWrite(green,LOW);
  delay(green00);
  
  digitalWrite(red,LOW);
  digitalWrite(blue,LOW);
  digitalWrite(green,LOW);
  delay(100);

  digitalWrite(red,LOW);
  digitalWrite(blue,HIGH);
  digitalWrite(green,LOW);
  delay(green00);
  
  digitalWrite(red,LOW);
  digitalWrite(blue,LOW);
  digitalWrite(green,LOW);
  delay(100);
  
  digitalWrite(red,LOW);
  digitalWrite(blue,LOW);
  digitalWrite(green,HIGH);
  delay(green00);

  digitalWrite(red,LOW);
  digitalWrite(blue,LOW);
  digitalWrite(green,LOW);
  delay(100);
  
  digitalWrite(red,LOW);
  digitalWrite(blue,HIGH);
  digitalWrite(green,HIGH);
  delay(green00);
  
  digitalWrite(red,LOW);
  digitalWrite(blue,LOW);
  digitalWrite(green,LOW);
  delay(100);

  digitalWrite(red,HIGH);
  digitalWrite(blue,LOW);
  digitalWrite(green,HIGH);
  delay(green00);
  
  digitalWrite(red,LOW);
  digitalWrite(blue,LOW);
  digitalWrite(green,LOW);
  delay(100);

  digitalWrite(red,HIGH);
  digitalWrite(blue,HIGH);
  digitalWrite(green,LOW);
  delay(green00);
  
  digitalWrite(red,LOW);
  digitalWrite(blue,LOW);
  digitalWrite(green,LOW);
  delay(100);

  digitalWrite(red,HIGH);
  digitalWrite(blue,HIGH);
  digitalWrite(green,HIGH);
  delay(green00);

  digitalWrite(red,LOW);
  digitalWrite(blue,LOW);
  digitalWrite(green,LOW);
  delay(100);
  
}

void white()
{
  digitalWrite(red,HIGH);
  digitalWrite(blue,HIGH);
  digitalWrite(green,HIGH);  
  delay(1000);

  digitalWrite(red,LOW);
  digitalWrite(blue,LOW);
  digitalWrite(green,LOW); 
}

void red()
{
  digitalWrite(red,HIGH);
  delay(1000);  
  digitalWrite(red,LOW); 
  delay(1000); 
}

void blue()
{
  digitalWrite(blue,HIGH);
  delay(1000);  
  digitalWrite(blue,LOW); 
  delay(1000); 
}

void green()
{
  digitalWrite(green,HIGH);
  delay(1000);  
  digitalWrite(green,LOW); 
  delay(1000); 
}
 