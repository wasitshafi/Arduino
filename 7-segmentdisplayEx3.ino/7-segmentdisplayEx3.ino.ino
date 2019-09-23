//use pins 4 to 10, GND and +5VE
const int a0=5;
const int a1=4;
const int a2=8;
const int a3=9;
const int a4=10;
const int a5=6;
const int a6=7;

void setup() {
  // put your setup code here, to run once:
 pinMode(a0,OUTPUT);
 pinMode(a1,OUTPUT);
 pinMode(a2,OUTPUT);
 pinMode(a3,OUTPUT);
 pinMode(a4,OUTPUT);
 pinMode(a5,OUTPUT);
 pinMode(a6,OUTPUT);
}
void loop() {
  // put your main code here, to run repeatedly:

  zero();
  delay(500);
  one();
  delay(500);
  two();
  delay(500);
  three();
  delay(500);
  four();
  delay(500);
  five();
  delay(500);
  six();
  delay(500);
  seven();
  delay(500);
  eight();
  delay(500);
  nine();
  delay(500);

  delay(2);
}

void zero()
{
  digitalWrite(a0,LOW);
  digitalWrite(a1,LOW);
  digitalWrite(a2,LOW);
  digitalWrite(a3,LOW);
  digitalWrite(a4,LOW);
  digitalWrite(a5,LOW);
  digitalWrite(a6,LOW);

  delay(100);
  digitalWrite(a0, HIGH);
  delay(100);
  digitalWrite(a5, HIGH);
  delay(100);
  digitalWrite(a4, HIGH);
  delay(100);
  digitalWrite(a3, HIGH);
  delay(100);
  digitalWrite(a2, HIGH);
  delay(100);
  digitalWrite(a1, HIGH);
  delay(100);

}
void one()
{
  digitalWrite(a0,LOW);
  digitalWrite(a1,LOW);
  digitalWrite(a2,LOW);
  digitalWrite(a3,LOW);
  digitalWrite(a4,LOW);
  digitalWrite(a5,LOW);
  digitalWrite(a6,LOW);

  delay(100);
  digitalWrite(a1, HIGH);
  delay(100);
  digitalWrite(a2, HIGH);
  delay(100);
}

void two()
{
  digitalWrite(a0,LOW);
  digitalWrite(a1,LOW);
  digitalWrite(a2,LOW);
  digitalWrite(a3,LOW);
  digitalWrite(a4,LOW);
  digitalWrite(a5,LOW);
  digitalWrite(a6,LOW);

  delay(100);
  digitalWrite(a0, HIGH);
  delay(100);
  digitalWrite(a1, HIGH);
  delay(100);
  digitalWrite(a6, HIGH);
  delay(100);
  digitalWrite(a4, HIGH);
  delay(100);
  digitalWrite(a3, HIGH);
  delay(100);
}

void three()
{
  digitalWrite(a0,LOW);
  digitalWrite(a1,LOW);
  digitalWrite(a2,LOW);
  digitalWrite(a3,LOW);
  digitalWrite(a4,LOW);
  digitalWrite(a5,LOW);
  digitalWrite(a6,LOW);

  delay(100);
  digitalWrite(a0, HIGH);
  delay(100);
  digitalWrite(a1, HIGH);
  delay(100);
  digitalWrite(a6, HIGH);
  delay(100);
  digitalWrite(a2, HIGH);
  delay(100);
  digitalWrite(a3, HIGH);
  delay(100);
}

void four()
{

  digitalWrite(a0,LOW);
  digitalWrite(a1,LOW);
  digitalWrite(a2,LOW);
  digitalWrite(a3,LOW);
  digitalWrite(a4,LOW);
  digitalWrite(a5,LOW);
  digitalWrite(a6,LOW);

  delay(100);
  digitalWrite(a5, HIGH);
  delay(100);
  digitalWrite(a6, HIGH);
  delay(100);
  digitalWrite(a1, HIGH);
  delay(100);
  digitalWrite(a2, HIGH);
  delay(100);
}

void five()
{
  digitalWrite(a0,LOW);
  digitalWrite(a1,LOW);
  digitalWrite(a2,LOW);
  digitalWrite(a3,LOW);
  digitalWrite(a4,LOW);
  digitalWrite(a5,LOW);
  digitalWrite(a6,LOW);

  delay(100);
  digitalWrite(a0, HIGH);
  delay(100);
  digitalWrite(a5, HIGH);
  delay(100);
  digitalWrite(a6, HIGH);
  delay(100);
  digitalWrite(a2, HIGH);
  delay(100);
  digitalWrite(a3, HIGH);
  delay(100);
}

void six()
{
  digitalWrite(a0,LOW);
  digitalWrite(a1,LOW);
  digitalWrite(a2,LOW);
  digitalWrite(a3,LOW);
  digitalWrite(a4,LOW);
  digitalWrite(a5,LOW);
  digitalWrite(a6,LOW);

  delay(100);
  digitalWrite(a0, HIGH);
  delay(100);
  digitalWrite(a5, HIGH);
  delay(100);
  digitalWrite(a4, HIGH);
  delay(100);
  digitalWrite(a3, HIGH);
  delay(100);
  digitalWrite(a2, HIGH);
  delay(100);
  digitalWrite(a6, HIGH);
  delay(100);
}

void seven()
{
  digitalWrite(a0,LOW);
  digitalWrite(a1,LOW);
  digitalWrite(a2,LOW);
  digitalWrite(a3,LOW);
  digitalWrite(a4,LOW);
  digitalWrite(a5,LOW);
  digitalWrite(a6,LOW); 

  delay(100);
  digitalWrite(a5, HIGH);
  delay(100);
  digitalWrite(a0, HIGH);
  delay(100);
  digitalWrite(a1, HIGH);
  delay(100);
  digitalWrite(a2, HIGH);
  delay(100);

}

void eight()
{
  digitalWrite(a0,LOW);
  digitalWrite(a1,LOW);
  digitalWrite(a2,LOW);
  digitalWrite(a3,LOW);
  digitalWrite(a4,LOW);
  digitalWrite(a5,LOW);
  digitalWrite(a6,LOW);

  delay(100);
  digitalWrite(a5, HIGH);
  delay(100);
  digitalWrite(a0, HIGH);
  delay(100);
  digitalWrite(a1, HIGH);
  delay(100);
  digitalWrite(a6, HIGH);
  delay(100);
  digitalWrite(a4, HIGH);
  delay(100);
  digitalWrite(a3, HIGH);
  delay(100);
  digitalWrite(a2, HIGH);
  delay(100);
}

void nine()
{

  digitalWrite(a0,LOW);
  digitalWrite(a1,LOW);
  digitalWrite(a2,LOW);
  digitalWrite(a3,LOW);
  digitalWrite(a4,LOW);
  digitalWrite(a5,LOW);
  digitalWrite(a6,LOW);
  
  delay(100);
  digitalWrite(a6, HIGH);
  delay(100);
  digitalWrite(a5, HIGH);
  delay(100);
  digitalWrite(a0, HIGH);
  delay(100);
  digitalWrite(a1, HIGH);
  delay(100);
  digitalWrite(a2, HIGH);
  delay(100);
  digitalWrite(a3, HIGH);
  delay(100);
}
