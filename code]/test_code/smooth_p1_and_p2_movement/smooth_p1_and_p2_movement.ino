
#include <Servo.h>

Servo y;
Servo p;// create servo object to control a servo
// twelve servo objects can be created on most boards

int pos = 0;    // variable to store the servo position

void setup() {
  y.attach(9);  // attaches the servo on pin 9 to the servo object
  p.attach(10);

  p.write(0);
  y.write(0);
 
}

void loop() {

  for (pos = 0; pos <= 270; pos += 1)
  {
    y.write(pos);
    delay(15);
  }
  
  for (pos = 0; pos <= 139; pos += 1) {
    // in steps of 1 degree
    p.write(pos);
    delay(15);                       
  }
  for (pos = 270; pos >= 0; pos -=1)
  {
    y.write(pos);
    delay(15);
  }
  
  for (pos = 139; pos >= 0; pos -= 1) { 
    p.write(pos);
    delay(15);                      
  }
}
