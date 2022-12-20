
int input1 = 3;
int input2 = 4;
int input3 = 5;
int input4 = 6;

void setup() {
  // put your setup code here, to run once:
  pinMode(input1,OUTPUT);
  pinMode(input2,OUTPUT);
  pinMode(input3,OUTPUT);
  pinMode(input4,OUTPUT);
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly
  void forward();
  delay (2000);
  void stopMotor();
  delay (1000);
  void reverse();
  delay (1000);
  
  
  

}
void forward(){
   digitalWrite( input1,HIGH);
   digitalWrite( input3,HIGH);
   
  }

void reverse(){
  digitalWrite( input1,HIGH);
  digitalWrite( input3,HIGH);
  }
 void stopMotor(){
   digitalWrite( input1,LOW);
   digitalWrite( input2,LOW);
   digitalWrite( input3,LOW);
   digitalWrite( input4,LOW); 
  }
