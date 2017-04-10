#ifndef MC33926MotorShield_h
#define MC33926MotorShield_h

#include <Arduino.h>

class MC33926MotorShield
{
public:
    MC33926MotorShield(
        unsigned char PWMD1, unsigned char IN1,
        unsigned char PWMD2, unsigned char IN2,
        unsigned char SF, unsigned char FB, unsigned char EN
    );
    void init();
    void setMotor(bool dir, int speed);
    unsigned int getCurrentMilliamps();
    unsigned char Fault();

private:
    unsigned char _PWMD1;
    unsigned char _PWMD2;
    unsigned char _IN1;
    unsigned char _IN2;
    unsigned char _SF;
    unsigned char _FB;
    unsigned char _EN;
};



#endif
