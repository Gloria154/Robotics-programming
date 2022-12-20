
int state = 0;
int Buzzer  = 7;
int sensor = 6;
int LED = 8;
void setup() {
  // put your setup code here, to run once:
  pinMode(Buzzer,OUTPUT);
  pinMode(sensor,INPUT);
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  state = digitalRead(sensor);
  Serial.println(state);
  if(state == 1) {
      digitalWrite(Buzzer,HIGH);
      digitalWrite(LED,LOW );
      delay(1000); 
    } 
   else{
       digitalWrite(Buzzer,LOW);
      digitalWrite(LED,HIGH);
      delay(1000); 
      }
      

  // i seco = 1000 

}
