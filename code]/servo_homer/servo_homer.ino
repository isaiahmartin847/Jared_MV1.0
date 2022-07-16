#include <Servo.h>

Servo servoY;
Servo servoP1;
Servo servoP2;

const int Home = 0;
const int Lpos = 270; 


void setup() {
  // put your setup code here, to run once:
  servoY.attach(7);
  servoP1.attach(8);
  servoP2.attach(9);
  

}

void loop() {
  // put your main code here, to run repeatedly:
  servoY.write(Home);
  servoP1.write(Home);
  servoP2.write(Home);

   for (int pos = 0; <= Lpos; pos += 1);
   {
    servoY.write(pos);
   }
  

  

}
