//# include <SoftwareSerial.h>
Char command;
SoftwareSerial BT (0,1);
int flag = 0;
int led = 8;
void setup() {
  // put your setup code here, to run once:
  Serial.begin (9600);
  BT.begin(9600);
  pinMode(led, OUTPUT);
  Serial.println("Ready to connect");

}

void loop() {
  // put your main code here, to run repeatedly:
  if(Serial.available()>0){
    command = Serial.read();
    if(flag =='A'){
      digitalWrite(led, HIGH);
      Serial.println("Led is On");
    }
    else{
      digitalWrite(led, LOW);
      Serial.println("Led is Off");
    }
  }

}
