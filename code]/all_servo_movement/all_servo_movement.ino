
#include <Servo.h>


int pos = 0;
const int HOME = 0;
const int s3HOME = 270;
const int s2MAX = 139;
const int MAX = 270;
const int D = 45;
int j;

Servo s1;
Servo s2;
Servo s3;

void setup() {
  // put your setup code here, to run once:
  s1.attach(9);
  s2.attach(10);
  s3.attach(6);


  s1.write(HOME);
  s2.write(HOME);
  s3.write(s3HOME);



}

void loop() 
{

  delay(1000);
//S2 move s2 from 0 to 70 degrees 
for (pos = 0; pos <= 70; pos += 1) { 
    s2.write(pos);
    delay(D);                       
  }
  delay(500);
  
  //S3 move s3 form 0 to 70 degrees 
  for (pos = 270; pos >= 122; pos -= 1) { 
    s3.write(pos);              
    delay(D);                       
  }
  
  delay(500);
  
  //S2 move s2 from 70 to 110 degrees 
  for (pos = 70; pos <= 110; pos += 1)
  {
    s2.write(pos);
    delay(D);
  } 
  
  delay(500);

    //S2 move s2 from 110 to 2 degrees 
    for(pos = 110; pos >= 2; pos -= 1)
    {
      s2.write(pos);
      delay(D);
    }
    delay(500);

    //S1 move s1 form 0 to 180 degrees 
    for (pos = 0; pos <= 180; pos += 1)
    {
      s1.write(pos);
      delay(D);
    }
    delay(500);

    //S2 move s2 from 2 to 110 degrees 
    for (pos = 2; pos <= 110;pos  += 1)
    {
      s2.write(pos);
      delay(D);
    }
    delay(500);

    //S2 moved s2 from 100 to 70 degrees 
    for (pos = 110; pos >= 70;pos -= 1)
    {
      s2.write(pos);
      delay(D);
    }
    delay(500);
    
  //S3 moves s3 from 70 degrees to 0 
  for (int pos = 122; pos <= 270; pos += 1)
  {
    s3.write(pos);
    delay(D);
  }

  delay(500);

  //S1 move s1 form 180 to 0 degrees 
  for (pos = 180; pos >= 0;pos -=1)
  {
    s1.write(pos);
    delay(D);
  }
  delay(500);

  //S2 move s2 from 70 to 0 degrees 
  for (pos = 70; pos >= 0;pos -=1)
  {
    s2.write(pos);
    delay(D);
  }

  

  delay(1000);
  
  

}
