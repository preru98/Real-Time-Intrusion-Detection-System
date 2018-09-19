#define trigPin1 A2
#define echoPin1 A5

long duration, distance, UltraSensor;

void setup() 
{
  Serial.begin(9600);           // set up Serial library at 9600 bps
  pinMode(trigPin1, OUTPUT);  
  pinMode(echoPin1, INPUT);
  pinMode(12,OUTPUT);

}

void loop()
{
  SonarSensor(trigPin1, echoPin1);
  UltraSensor = distance;
  if(UltraSensor<23)
    {
      digitalWrite(12,HIGH);
      delay(250);
    }
  else 
      digitalWrite(12,LOW);
}

void SonarSensor(int trigPin,int echoPin)
{
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH); 
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  duration = pulseIn(echoPin, HIGH);
  distance = (duration/2) / 29.1;
  delay(100);
}
