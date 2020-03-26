#include <Servo.h>
 
Servo servoMotor;
Servo servoMotor2;
Servo servoMotor3;




void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
 
  // Iniciamos el servo para que empiece a trabajar con el pin 9
  servoMotor.attach(7);
    servoMotor2.attach(8);
     servoMotor3.attach(4);
  
  // Inicializamos al ángulo 0 el servomotor
  servoMotor.write(0);
  servoMotor2.write(0);
  servoMotor3.write(0);

}

void loop() {
  // put your main code here, to run repeatedly:

  char opcion='i';

  switch(opcion)

  {
case 'i':
servoMotor3.write(180);
break;

case 'd':
servoMotor3.write(0);
break;

case 'a':
  servoMotor.write(180);
  servoMotor2.write(180);

break;

case 's':
  servoMotor.write( 90);
  servoMotor2.write(90);

break;
    
    
    }

  

}
