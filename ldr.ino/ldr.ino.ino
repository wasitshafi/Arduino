int ana=A0;
int val=0;
const int pin=9;
float vol;

void setup() {
  // put your setup code here, to run once:
pinMode(pin,OUTPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
val=analogRead(ana);

vol= (val*5.0)/1023.0;
Serial.println(vol);

if(vol>3.5)
{
  digitalWrite(pin,HIGH);
}
else
{
  digitalWrite(pin,LOW);
}

delay(10);
}
