#include <Servo.h>	//importa a biblioteca do servo motor

Servo servo1;  		// cria o objeto meuservo
Servo servo2;
int pos=0;

void setup() {
  	servo1.attach(9);  // configura o pino 9 do arduino para o servo motor
	servo2.attach(10);
}

void loop() {
	
	for (pos = 0; pos<=180; pos++){
		servo2.write(pos);
		servo1.write(pos);
		
		delay(15);
	}

  	for (pos = 0; pos>=180; pos--){
		servo2.write(pos);
		servo1.write(pos);
		
		delay(15);
	}
}