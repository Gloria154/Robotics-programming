#include<Servo.h>
#include <Wire.h> 
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27,16,2);
Servo servo;
int trig = 3;
int echo = 2;
int LED = 5;
int buzzer = 6;
int distance;
int duration;
int pos;

void setup() {                      
  lcd.init();
  lcd.backlight();
  lcd.setCursor(0,0);
  lcd.print("Welcome HOME");
  delay(1000);
  lcd.clear();
  pinMode(trig, OUTPUT);
  pinMode(echo, INPUT);
  pinMode(buzzer,OUTPUT);
  pinMode(LED, OUTPUT);
  servo.attach(9);
  Serial.begin(9600);
  
}
 
void loop() {
  servo.write(180);
  delay(1000);
  
  digitalWrite(trig, HIGH);
  delay(2);
  digitalWrite(trig, LOW);
  duration= pulseIn(echo, HIGH);
  distance= duration*0.034*0.5;
  Serial.println(distance);
  //Serial.print("cm");
  
  if ( distance <= 10){
    for( pos= 180 ; pos>=90; pos-=90){
      servo.write(90);
      lcd.setCursor(0,0);
      lcd.print("Please Enter");
      tone(buzzer ,10);
      delay(200);
      noTone(buzzer);
      digitalWrite(LED,HIGH);
      delay(2000);
      lcd.clear();
      digitalWrite(LED,LOW);
     }
  }
   else if(distance>10 and distance<15) {
    servo.write(180);
    lcd.print("Approaching");
    delay(1000);
    lcd.clear();
  }
  else{
  /* for(pos=90; pos<= 180; pos+=90){
      servo.write(180);
      delay(1000); */
//       servo.write(180);
//       delay(1000);
      
      lcd.clear(); 
      lcd.setCursor(0,0);
      lcd.print("Closed");
      delay(1000);
      lcd.clear();
      digitalWrite(buzzer, LOW);  
      digitalWrite(LED, LOW);
    }
  }
//}

  
