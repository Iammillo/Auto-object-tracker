#ifndef PWM_H
#define PWM_H
#define ICRValue  2000
void pwm_init(){
	TCCR1A = (1 << COM1A0)|(1 << COM1A1)|(1 << COM1B0)|(1 << COM1B1)|(1 << WGM11);
	TCCR1B = (1 << WGM12)|(1 << WGM13)|(1 << CS10);
	ICR1 = ICRValue;
}
void pwm_writeA(int speed){	
	OCR1A = ICRValue - speed;
}

void pwm_writeB(int speed){
	OCR1B = ICRValue - speed;
}
#endif