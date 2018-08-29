#define SENSOR A0
#define LED 12
#define LED 8
void setup()
{
  pinMode(SENSOR,INPUT);
  pinMode(LED ,OUTPUT);
  Serial.begin(9600);
} 
 

void loop()
{ int AnalogValue;
AnalogValue = analogRead(A0);
Serial.println(AnalogValue);

if(AnalogValue==0)
 {digitalWrite(12,LOW);
 digitalWrite(8,LOW);
 delay(100);
 }
 else
 {digitalWrite(12,HIGH);
 digitalWrite(8,HIGH);
 delay(100);
 }
}




