#ifndef ONE_LED_LED_LINKIT_ONE_H
#define ONE_LED_LED_LINKIT_ONE_H

#include <Arduino.h>
#include "TL_Config.h"

class Internal_LED
{

private:
  int state;
  const static int ledPin = 13;

public:
  Internal_LED();
  void init();
  void toggle();
  void turnOn();
  void turnOff();
};

extern Internal_LED TL_LED;

#endif
