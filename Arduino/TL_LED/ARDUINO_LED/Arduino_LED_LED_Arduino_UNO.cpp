#include "Arduino_LED_LED_Arduino_UNO.h"

Internal_LED::Internal_LED()
{
  pinMode(ledPin, OUTPUT);
  state = 0;
}

void Internal_LED::toggle()
{
  if (state == 0)
  {
    state = 1;
    digitalWrite(ledPin, HIGH);
  }
  else
  {
    state = 0;
    digitalWrite(ledPin, LOW);
  }
}

void Internal_LED::turnOn()
{
  state = 1;
  digitalWrite(ledPin, HIGH);
}

void Internal_LED::turnOff()
{
  state = 0;
  digitalWrite(ledPin, LOW);
}

Internal_LED TL_LED;
