#ifndef DCMOTOR_H_
#define DCMOTOR_H_

#include "DIO.h"

void initDCMotor(unsigned char port, unsigned char pinA, unsigned char pinB, unsigned char pinE);
void rotate_f(unsigned char port, unsigned char pinA, unsigned char pinB, unsigned char pinE);
void rotate_b(unsigned char port, unsigned char pinA, unsigned char pinB, unsigned char pinE);
void breaks(unsigned char port, unsigned char pinA, unsigned char pinB, unsigned char pinEr);
void delayM(int seconds);


#endif /* DCMOTOR_H_ */