// C++ code
//

#include <Servo.h>


// Define the servo
Servo servo1;
Servo servo2;
Servo servo3;
Servo servo4;


void setup()
{
  // Attach the servo signals to digital pins.
  servo1.attach(3);
  servo2.attach(5);
  servo3.attach(6);
  servo4.attach(9);

  // Sweep from 0 to 180 degrees over 1 second (1000ms / 180 degrees ≈ 5.55ms)
  for (int pos1 = 0; pos1 <=180; pos1 +=1){
  	servo1.write(pos1);
    servo2.write(pos1);
    servo3.write(pos1);
    servo4.write(pos1);
    delay(5.55); 
  }
  
  // Sweep from 180 to 0 degrees over 1 second (1000ms / 180 degrees ≈ 5.55ms)
  for (int pos2 = 180; pos2 >=0; pos2 -=1){
  	servo1.write(pos2);
    servo2.write(pos2);
    servo3.write(pos2);
    servo4.write(pos2);
    delay(5.55); 
  }
  
  // Holding all servo on 90 degree.`	`
  servo1.write(90);
  servo2.write(90);
  servo3.write(90);
  servo4.write(90);
}

void loop()
{}