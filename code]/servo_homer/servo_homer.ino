#include <Servo.h>

int const HOME = 0;

Servo s1;
Servo s2;
Servo s3;

void setup() {
  // put your setup code here, to run once:
  s1.attach(9);
  s2.attach(10);
  s3.attach(6);
}

void loop() {
  // put your main code here, to run repeatedly:


s1.write(HOME);
s2.write(HOME);
s3.write(270);

}
