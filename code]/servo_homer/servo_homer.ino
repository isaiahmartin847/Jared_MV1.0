#include <Servo.h>

Servo servoY;
Servo servoP1;
Servo servoP2;

const int Home = 0;
int posY = 0;
int posP1 = 0;
int posP2 = 0;
const int full = 270;


void setup() {
  // put your setup code here, to run once:
  servoY.attach(9);
  servoP1.attach(10);
  servoP2.attach(11);

  servoY.write(Home);
  delay(5);
  servoP1.write(Home);
  delay(5);
  servoP2.write(Home);
  delay(5);

}

void loop() {

  
//sero Y
for (int pos = 0; pos <= full; pos += 1) 
  {
      servoY.write(pos);              
      delay(10);                        
  }
  
  for (int pos = 270; pos >= 0; pos -= 1) 
  { 
      servoY.write(pos);              
      delay(10); 
  }

  //servo P1
  for (int pos = 0; pos <= full; pos += 1) 
  {
      servoP1.write(pos);              
      delay(10);                    
  }
  
  for (int pos = 270; pos >= 0; pos -= 1) 
  { 
      servoP1.write(pos);              
      delay(10); 
  }

  //servoP2
  for (int pos = 0; pos <= full; pos += 1) 
  {
     servoP2.write(pos);              
      delay(10);                       
  }
  
  for (int pos = 270; pos >= 0; pos -= 1) 
  { 
      servoP2.write(pos);              
      delay(10); 
  }
}
