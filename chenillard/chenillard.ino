

int led1=2;
int led2 =3;
int led3= 4;
int led4= 5;
int led5 =6;
int led6 =7;
int led7 =8;
int led8 =9;
int led9 =10;




// the setup routine runs once when you press reset:
void setup() {   
   Serial.begin(9600);             
  // initialize the digital pin as an output.
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  pinMode(led5, OUTPUT );
  pinMode(led6, OUTPUT);
  pinMode(led7, OUTPUT);
  pinMode(led8, OUTPUT);
  pinMode(led9, OUTPUT);
}

// the loop routine runs over and over again forever:
void loop() {
  digitalWrite(led9,0);
  delay(1000);
  digitalWrite(led1,1);
  delay(1000);
   digitalWrite(led1,0);
   digitalWrite(led2,1);
  delay(1000);
  digitalWrite(led2,0);
   digitalWrite(led3,1);
  delay(1000);
digitalWrite(led3,0);
 digitalWrite(led4,1);
  delay(1000);
  digitalWrite(led4,0);
   digitalWrite(led5,1);
  delay(1000);
digitalWrite(led5,0);
   digitalWrite(led6,1);
  delay(1000);
digitalWrite(led6,0);
   digitalWrite(led7,1);
  delay(1000);
digitalWrite(led7,0);
   digitalWrite(led8,1);
  delay(1000);
digitalWrite(led8,0);
   digitalWrite(led9,1);
  delay(1000);
}
