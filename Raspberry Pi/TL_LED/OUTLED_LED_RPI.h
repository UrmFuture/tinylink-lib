#ifndef TINYLINK_LED_FILE
#define TINYLINK_LED_FILE

#include <cstdio>
#include <cstdlib>

#define BUFSIZE 64

namespace tinylink {
class LedFile {
private:
    char _direction_path[BUFSIZE], _value_path[BUFSIZE];
    FILE *_direction = NULL, *_value = NULL;
    int _pin = -1;
    int _mode = -1;//0 INPUT; 1 OUTPUT
    void _digitalWrite(int value);
    int _digitalRead();
    void _openPin(int pin);
    void _closePin();
    void _set_direction(int direction);
public:
    LedFile(int pin) {setPin(pin);}
    ~LedFile();
    LedFile &setPin(int pin);
    void turnOn(void);
    void turnOff(void);
    void toggle(void);
    int state(void);
};
}

extern tinylink::LedFile TL_LED;

#endif
