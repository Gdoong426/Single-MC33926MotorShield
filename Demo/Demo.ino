#include <MC33926MotorShield.h>

MC33926MotorShield md(11,9,10,8,A0,A1,12);

void setup() {
  // put your setup code here, to run once:
  md.init();
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  char c = Serial.read();
  if ( c == 'f'){
    md.setMotor(true, 180);
    Serial.println(c);
  }
  if (c == 'b'){
    md.setMotor(false,180);
    Serial.println(c);
  }
  unsigned int amps = md.getCurrentMilliamps();
  //Serial.println(amps);
}
