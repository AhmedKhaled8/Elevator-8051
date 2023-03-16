#include "DCMOTOR.h"

void initDCMotor(unsigned char port, unsigned char pinA, unsigned char pinB, unsigned char pinE)
{
	DIO_vsetPINDir(port, pinA, 1);
	DIO_vsetPINDir(port, pinB, 1);
	DIO_vsetPINDir(port, pinE, 1);
}

void rotate_f(unsigned char port, unsigned char pinA, unsigned char pinB, unsigned char pinE)
{
	DIO_write(port, pinA, 1);
	DIO_write(port, pinB, 0);
	DIO_write(port, pinE, 1);
}



void rotate_b(unsigned char port, unsigned char pinA, unsigned char pinB, unsigned char pinE)
{
	DIO_write(port, pinA, 0);
	DIO_write(port, pinB, 1);
	DIO_write(port, pinE, 1);
}

void breaks(unsigned char port, unsigned char pinA, unsigned char pinB, unsigned char pinE)
{
	DIO_write(port, pinA, 0);
	DIO_write(port, pinB, 0);
	DIO_write(port, pinE, 0);
}

void delayM(int seconds)
{

    int i,j;
    for(i=0;i<=seconds;i++)
    for(j=0;j<=5;j++);
}