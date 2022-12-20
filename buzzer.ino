

int state = 0;
int Buzzer  = 6;
int switchButton = 7;
void setup() {
  // put your setup code here, to run once:
  pinMode(Buzzer,OUTPUT);
  pinMode(switchButton,INPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  state = digitalRead(switchButton);
  if(state == 1){
      tone(Buzzer,1000);// 1000 is the time taken for it to make noise
      delay(1000);
      noTone(Buzzer);
      delay(1000);
    } 
    else{
     
      noTone(Buzzer);
      delay(1000); 
      }
  
  // i seco = 1000 

}
