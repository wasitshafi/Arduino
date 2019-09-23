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
  digitalWrite(a0, HIGH);
  digitalWrite(a1, HIGH);
  digitalWrite(a2, HIGH);
  digitalWrite(a3, HIGH);
  digitalWrite(a4, HIGH);
  digitalWrite(a5, HIGH);
  digitalWrite(a6, LOW);
}
void one()
{
  digitalWrite(a0, LOW);
  digitalWrite(a1, HIGH);
  digitalWrite(a2, HIGH);
  digitalWrite(a3, LOW);
  digitalWrite(a4, LOW);
  digitalWrite(a5, LOW);
  digitalWrite(a6, LOW);
}

void two()
{
  digitalWrite(a0, HIGH);
  digitalWrite(a1, HIGH);
  digitalWrite(a2, LOW);
  digitalWrite(a3, HIGH);
  digitalWrite(a4, HIGH);
  digitalWrite(a5, LOW);
  digitalWrite(a6, HIGH);
}

void three()
{
  digitalWrite(a0, HIGH);
  digitalWrite(a1, HIGH);
  digitalWrite(a2, HIGH);
  digitalWrite(a3, HIGH);
  digitalWrite(a4, LOW);
  digitalWrite(a5, LOW);
  digitalWrite(a6, HIGH);
}

void four()
{
  digitalWrite(a0, LOW);
  digitalWrite(a1, HIGH);
  digitalWrite(a2, HIGH);
  digitalWrite(a3, LOW);
  digitalWrite(a4, LOW);
  digitalWrite(a5, HIGH);
  digitalWrite(a6, HIGH);
}

void five()
{
  digitalWrite(a0, HIGH);
  digitalWrite(a1, LOW);
  digitalWrite(a2, HIGH);
  digitalWrite(a3, HIGH);
  digitalWrite(a4, LOW);
  digitalWrite(a5, HIGH);
  digitalWrite(a6, HIGH);
}

void six()
{
  digitalWrite(a0, HIGH);
  digitalWrite(a1, LOW);
  digitalWrite(a2, HIGH);
  digitalWrite(a3, HIGH);
  digitalWrite(a4, HIGH);
  digitalWrite(a5, HIGH);
  digitalWrite(a6, HIGH);
}

void seven()
{
  digitalWrite(a0, HIGH);
  digitalWrite(a1, HIGH);
  digitalWrite(a2, HIGH);
  digitalWrite(a3, LOW);
  digitalWrite(a4, LOW);
  digitalWrite(a5, HIGH);
  digitalWrite(a6, LOW);
}

void eight()
{
  digitalWrite(a0, HIGH);
  digitalWrite(a1, HIGH);
  digitalWrite(a2, HIGH);
  digitalWrite(a3, HIGH);
  digitalWrite(a4, HIGH);
  digitalWrite(a5, HIGH);
  digitalWrite(a6, HIGH);
}

void nine()
{
  digitalWrite(a0, HIGH);
  digitalWrite(a1, HIGH);
  digitalWrite(a2, HIGH);
  digitalWrite(a3, HIGH);
  digitalWrite(a4, LOW);
  digitalWrite(a5, HIGH);
  digitalWrite(a6, HIGH);
}
