const int ledPin = 14;

const int frequency = 2500;
const int ledChannel = 0;
const int resolution = 8;

void setup(){
  ledcSetup(ledChannel, frequency, resolution);    //configure PWM functionalities

  ledcAttachPin(ledPin,ledChannel);    //attach the channel to the GPIO to be controlled
}

void loop()
{
  for(int dutyCycle = 0; dutyCycle <= 256; dutyCycle++)
  {
    ledcWrite(ledChannel,dutyCycle);
    delay(50);
  }

  for(int dutyCycle=255; dutyCycle >= 0;dutyCycle--)
  {
    ledcWrite(ledChannel,dutyCycle);
    delay(50);
  }
}
