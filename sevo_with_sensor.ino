# include<Servo.h>
int pos;
Servo myServo;
int state = 0;
int LED = 8;
int Buzzer  = 7;
int sensor = 6;
void setup() {
  // put your setup code here, to run once: 
  pinMode(LED,OUTPUT);
  pinMode(Buzzer,OUTPUT);
  pinMode(sensor,INPUT);
  Serial.begin(9600);
  myServo.attach(11);
}

void loop() {
  // put your main code here, to run repeatedly:
state = digitalRead(sensor);
  Serial.println(state);
  state = digitalRead(sensor);
  if(state == 1){
   for (pos = 0; pos<=180; pos+=70){
      myServo.write(pos);
      delay(100);
      digitalWrite(Buzzer,HIGH);
      digitalWrite(LED,LOW );
      delay(1000); 
    }
    } 
   else{
       for(pos = 180; pos>=0; pos-=70){
      myServo.write(pos);
      delay(100);
      digitalWrite(Buzzer,LOW);
      digitalWrite(LED,HIGH);
      delay(1000); 
      
      } 
      }

}
