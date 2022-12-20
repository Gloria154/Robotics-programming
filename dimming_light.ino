
int led = 6;
int intensity = 255;
void setup() {
  // put your setup code here, to run once:
  pinMode(led,OUTPUT);
}
void loop() {
  // put your main code here, to run repeatedly:
  while(intensity !=0 ){
    analogWrite(led,intensity);
    delay(20);
    intensity = intensity-1;
    }
    while(intensity <= 255 && intensity >=0){
    analogWrite(led,intensity);
    delay(20);
    intensity = intensity + 1;
    }
    
  
  

}
