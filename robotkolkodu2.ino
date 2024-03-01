//TEKNOFEST ROBOT KOL PROJESİ *MUSABAYAR*

#include <Stepper.h> 
#include <Servo.h>

Stepper stepper(STEPS, 2, 3);
#define STEPS 200
#define motorInterfaceType 1

Servo servo1;
Servo servo2;

int joyX1 = 0;
int joyY1 = 0;
int joyX2 = 0;
int joyY2 = 0;
int joyX3 = 0;
int joyY3 = 0;
int servoVal;
int Pval = 0;
int potVal = 0;

void setup() 
{
  stepper.setSpeed(1000);
  servo1.attach(8);
  servo2.attach(9);
  servo1.attach(10);
  servo2.attach(11);
  servo1.attach(12);
  servo2.attach(13);
}
void loop()
{
  potVal = map(analogRead(A7),0,1024,0,500);
  if (potVal>Pval)
    stepper.step(10);
  if (potVal<Pval)
      stepper.step(-10);
Pval = potVal;
}
//ARAYA VOIDLI BISEY SIKISTIRMALIYIZ BU SEKILDE OLMAZ!!
{
  servoVal = analogRead(A0);
  servoVal = map(servoVal, 0, 1023, 0, 180);
  servo1.write(servoVal);
  servoVal = analogRead(A1);
  servoVal = map(servoVal, 0, 1023, 70, 180);
  servo2.write(servoVal);
  delay(15);  
}
{
  servoVal = analogRead(A2);
  servoVal = map(servoVal, 0, 1023, 0, 180);
  servo3.write(servoVal);
  servoVal = analogRead(A3);
  servoVal = map(servoVal, 0, 1023, 70, 180);
  servo4.write(servoVal);
  delay(15);  
}
{
  servoVal = analogRead(A4);
  servoVal = map(servoVal, 0, 1023, 0, 180);
  servo5.write(servoVal);
  servoVal = analogRead(A5);
  servoVal = map(servoVal, 0, 1023, 70, 180);
  servo6.write(servoVal);
  delay(15);  
}