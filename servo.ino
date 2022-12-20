
# include<Servo.h>
int pos;
Servo myServo;


void setup() {
  // put your setup code here, to run once:
 myServo.attach(11);

}

void loop() {
  // put your main code here, to run repeatedly:
  for (pos = 0; pos<=180; pos+=70){
      myServo.write(pos);
      delay(100);
    }
    for(pos = 180; pos>=0; pos-=70){
      myServo.write(pos);
      delay(100);
      }
}
