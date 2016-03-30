int motorpin1 = 5;                  //define digital output pin no.
int motorpin2 = 7;                  //define digital output pin no.
bool rotation = false;
int pin3 = 3;
int pin4 = 4;
bool on = false;

void setup()
{
  Serial.begin(9600);               //  setup serial
  pinMode(motorpin1,OUTPUT);        //set pin 3 as output
  pinMode(motorpin2,OUTPUT);        // set pin 4 as output
  pinMode(pin3,INPUT);
  pinMode(pin4,INPUT);
}
void loop()
{
   if (digitalRead(pin3) == HIGH)
     rotation = not rotation;
   if (digitalRead(pin4) == HIGH)
       on = not on;

  if (on)
      if (rotation)
      {
        digitalWrite(motorpin2,LOW);
        digitalWrite(motorpin1,HIGH); 
      }
      else
      {
        digitalWrite(motorpin1,LOW);
        digitalWrite(motorpin2,HIGH);
      }
   else
   {
       digitalWrite(motorpin1,LOW);
       digitalWrite(motorpin2,LOW);
   }

  delay(500);

}
