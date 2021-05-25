#include <IRremote.h>
int IRpin = 8;
//int led = 9;

IRrecv irrecv(IRpin);
decode_results results;

void setup()
{
  Serial.begin(9600);
  irrecv.enableIRIn();
  //pinMode(led,OUTPUT);
}

void loop()
{
  if(irrecv.decode(&results))
  {
   // digitalWrite(led,HIGH);
    Serial.println(results.value%400);
    delay(10);

    irrecv.resume();
  }
  //digitalWrite(led,LOW);
}
