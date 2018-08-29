#define SENSOR A0
#define LED1 12
#define LED2 8

void setup()
{
  pinMode(SENSOR,INPUT);
  pinMode(LED1 ,OUTPUT);
  pinMode(LED2 ,OUTPUT);
  Serial.begin(9600);
} 
 

void loop()
{ 
  int AnalogValue;
  AnalogValue = analogRead(SENSOR);
  Serial.println(AnalogValue);

  if(AnalogValue==0)
 {
  digitalWrite(LED1,LOW);
  digitalWrite(LED2,LOW);
  delay(100);
 }
 
 else
 {
  digitalWrite(LED1,HIGH);
  digitalWrite(LED2,HIGH);
  delay(100);
 }
}




