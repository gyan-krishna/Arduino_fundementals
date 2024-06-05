int led = 9;         // the PWM pin the LED is attached to
int brightness;     // how bright the LED is

void setup() 
{
  pinMode(led, OUTPUT);
}

void loop() 
{
  for(int brightness = 0 ; brightness <= 255 ; brightness+=5)
  {
    analogWrite(led, brightness);
    delay(50);
  }
  for(int brightness = 255 ; brightness >= 0 ; brightness-=5)
  {
    analogWrite(led, brightness);
    delay(50);
  }
  delay(30);
}
