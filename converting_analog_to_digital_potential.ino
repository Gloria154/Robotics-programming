int potential= A1
int led = 6;
int intensity;

void setup() {
  // put your setup code here, to run once:
   pinMode(led,OUTPUT);
   pinMode(potential,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  //0 to 1023 digital in analog world
  int value = analogRead(A1)
  intensity = map(value,0,255,0,1023);
  analogWrite(led, brightness);

}
