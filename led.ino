
int LED = 7;
void setup() {
  // put your setup code here, to run once:
  pinMode(LED,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(LED, HIGH);//FOR OUTPUT, COMMAND THE LED TO LIGHT
  delay(1000);//counts in microseconds
  digitalWrite(LED,LOW);//FOR OUTPUT, COMMAND THE LED TO 
  delay(1000);//counts in microseconds
  // i seco = 1000
  

}
