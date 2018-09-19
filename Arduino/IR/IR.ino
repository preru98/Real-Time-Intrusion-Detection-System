#define SENSOR 10
#define LED 12
void setup()
{
  pinMode(SENSOR,INPUT);
  pinMode(LED,OUTPUT);
}

void loop()
{
  if(digitalRead(SENSOR)==1)
  {
    digitalWrite(LED,HIGH);
    delay(500);
    digitalWrite(LED,LOW);
  }
  

}
