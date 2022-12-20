#include<Wire.h>
#include<LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27,16,2);
int lm35 = A0;
int temp;
void setup() {
  // put your setup code here, to run once:
  pinMode(lm35,INPUT);
  lcd.backlight();//enable to light
  lcd.init();
  lcd.begin(16,2);//causes the arduno software to interact with the hardware
  lcd.setCursor(2,0);
  lcd.print ("Hey Gloria");
  delay(2000);
  lcd.clear();
}
void loop() {
  // put your main code here, to run repeatedly:
  temp = analogRead(A0);
  lcd.println(0,1);
  lcd.println("TEMP =");
  lcd.println(temp);
  delay(2000);
  lcd.clear();
}
