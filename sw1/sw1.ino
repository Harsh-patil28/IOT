#define PUSHBUTTON1 18
#define PUSHBUTTON2 21
#define led 5
#define led2 19
int value=0;
int value1=0;
void setup() {
  pinMode(PUSHBUTTON1,INPUT);
pinMode(PUSHBUTTON2,INPUT);  
pinMode(5,OUTPUT);
pinMode(19,OUTPUT);
Serial.begin(9600);


}

void loop() {
  // put your main code here, to run repeatedly:
                            
                   value=digitalRead(PUSHBUTTON1);
                   value1=digitalRead(PUSHBUTTON2);
                   Serial.print("PUSHBUTTON value is : ");
                   Serial.println(value);
                   if(value==0)
                    digitalWrite(led,HIGH);
                    Serial.println("LED IS ON");
                       if(value==1)
                       digitalWrite(led,LOW);
                       Serial.println("LED IS OFF");    
                       if(value1==0)
        digitalWrite(led2,HIGH);
      if(value1==1)
        digitalWrite(led2,LOW) ;                   

}
