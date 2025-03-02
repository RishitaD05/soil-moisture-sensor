int redLed=10;
int yellowLed=9;
int greenLed=8;
int sensor_pin=A0;

void setup()
{
  pinMode(redLed, OUTPUT);
  pinMode(yellowLed, OUTPUT);
  pinMode(greenLed, OUTPUT);
  pinMode(sensor_pin, INPUT);
}

void loop()
{
  int sensor_data=analogRead(sensor_pin);
  
  if(sensor_data<100){
    digitalWrite(redLed,HIGH);
    digitalWrite(yellowLed,LOW);
    digitalWrite(greenLed,LOW);
}
  
  else if(sensor_data>600){
    digitalWrite(redLed,LOW);
    digitalWrite(yellowLed,LOW);
    digitalWrite(greenLed,HIGH);
}
  else{
   
    digitalWrite(redLed,LOW);
    digitalWrite(yellowLed,HIGH);
    digitalWrite(greenLed,LOW);
}
}
