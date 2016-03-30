#define sensorTrigPin 7
#define sensorEchoPin 8
#define red 4
#define green 3
#define blue 2

void setup()
{
    Serial.begin(9600);
    pinMode(sensorTrigPin, OUTPUT);
    pinMode(sensorEchoPin, INPUT);
    pinMode(blue, OUTPUT);
    pinMode(green, OUTPUT);
    pinMode(red, OUTPUT);
}

void loop()
{
    int pulseWidth = 0;

    digitalWrite(sensorTrigPin, HIGH);
    delayMicroseconds(10);
    digitalWrite(sensorTrigPin, LOW);

    pulseWidth = pulseIn(sensorEchoPin, HIGH);
    int distance = pulseWidth/58.2;
    Serial.println(distance);
    
    
    if (distance <6)
    {
      digitalWrite(blue,HIGH);
      digitalWrite(green,HIGH);
      digitalWrite(red,LOW);
    }
    if (distance > 6 && distance <12)
    {
      digitalWrite(red,HIGH);
      digitalWrite(blue,HIGH);
      digitalWrite(green,LOW);
    }
    if (distance > 18)
    {
      digitalWrite(red,HIGH);
      digitalWrite(green,HIGH);
      digitalWrite(blue,LOW);
    }
   delay(50);
}
