# Arduino library for Pololu Single MC33926 Motor Drive

Version 1.0
Release date: 4/10/2017

##Notice
This is a library for an Arduino controller that interfaces with 
the [Pololu Single MC33926 Motor Drive](https://www.pololu.com/product/1212).

### Install guide

Since this library isn't available in Arduino Library Manager, you'll 
have to install this library manually.
1. Download the [library from Github](https://github.com/Gdoong426/Single-MC33926MotorShield/archive/master.zip) and decompress it.
1. Drag the "Single-MC33926MotorShield" folder into the "libraries " directory inside your Arduino libraries directory.
1. Restart the Arduino IDE.

## Demo
This demo can let you control one motor from your arduino serial monitor.
Type 'f' to make the motor turn forward, and 'b' backword.

## Function
* `MC33926MotorShield(unsigned char PWMD1, unsigned char IN1,unsigned char PWMD2, unsigned char IN2,
    unsigned char SF, unsigned char FB,unsigned char EN)` <br> constructors for motor drive mapped by you.
* `void init()` <br> Initialize the PinMode.
* `void setMotor(bool dir, int speed)` <br> Set the speed and direction for the motor. The speed value should be between 0
and 255. 
* `unsigned int getCurrentMilliamps()` <br> Return the current reading*
* `unsigned char Fault()` <br> 1: motor drive fault. 0: no fault to motor drive.
