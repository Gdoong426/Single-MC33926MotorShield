#include "MC33926MotorShield.h"


MC33926MotorShield::MC33926MotorShield(unsigned char PWMD1, unsigned char IN1,unsigned char PWMD2, unsigned char IN2,
    unsigned char SF, unsigned char FB,unsigned char EN)
{
    _PWMD1 = PWMD1;
    _PWMD2 = PWMD2;
    _IN1 = IN1;
    _IN2 = IN2;
    _SF = SF;
    _FB = FB;
    _EN = EN;
}

void MC33926MotorShield::init(){
    pinMode(_PWMD1,OUTPUT);
    pinMode(_PWMD2,OUTPUT);
    pinMode(_IN1,OUTPUT);
    pinMode(_IN2,OUTPUT);
    pinMode(_SF,INPUT);
    pinMode(_FB,INPUT);
    pinMode(_EN,OUTPUT);
    digitalWrite(_EN,HIGH);


}

// Set speed for the motor
void MC33926MotorShield::setMotor( bool dir,int speed){
    if (dir == true){

        digitalWrite(_IN2, HIGH);
        digitalWrite(_IN1, LOW);
        if (speed > 255)
            analogWrite(_PWMD2,255);
        else
            analogWrite(_PWMD2,speed);

    }
    else if (dir == false){
        digitalWrite(_IN2, LOW);
        digitalWrite(_IN1, HIGH);
        if (speed > 255)
            analogWrite(_PWMD2,255);
        else
            analogWrite(_PWMD2,speed);
    }
}

unsigned int MC33926MotorShield::getCurrentMilliamps(){
    return analogRead(_FB)*9;
}

unsigned char MC33926MotorShield::Fault(){
    return !digitalRead(_SF);
}
