

#include <IRremote.h>
int RECV_PIN = 9;

int red = 10;
int white = 5;
int yellow = 3;
int val=85;

bool r=false;
bool w=false;
bool y=false;
bool a=false;

IRrecv irrecv(RECV_PIN);
decode_results results;

void setup() 
{
  Serial.begin(9600);
  pinMode(red, OUTPUT);
  pinMode(white, OUTPUT);
  pinMode(yellow, OUTPUT);
  irrecv.enableIRIn();
  irrecv.blink13(true); 
}
void loop() 
{
  Serial.println(results.value,HEX);
  if (irrecv.decode(&results)) 
   {
     Serial.println(results.value,HEX);
     delay(10);
     /////////////////////////
     if(results.value==0x40BD00FF)
     {
        r=!r;
        digitalWrite(red, r);
        
     }
     ////////////////////////
     else if(results.value==0x40BD807F)
     {
        w=!w;
        digitalWrite(white, w);
        
     }
     else if(results.value==0x40BD40BF)
     {
        y=!y;
        digitalWrite(yellow, y);
        
     }  
     //////////////////////////////
     else if(results.value==0x40BD28D7)
     {
        if(r||w||y)
        {
          a=true;
          r=false;
          w=false;
          y=false;
                    
          Serial.println("a=true");
        }
        a=!a;
        digitalWrite(red, a);
        digitalWrite(white, a);
        digitalWrite(yellow, a);        
        if(a)
        {
         r=true;
         w=true;
         y=true; 
        }
     }
         
     irrecv.resume(); // Receive the next value
   }
  
}  
