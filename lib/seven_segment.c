/*
 * seven_segment.c
 *
 */ 

#include "DIO.h"
void seven_seg_vinit(unsigned char port_name)
{
	DIO_set_port_direction(port_name,1); //output
}

void seven_seg_write(unsigned char portname, unsigned char number)
{
	unsigned char displayMap[]={0x3f, 0x06, 0x5b, 0x4f, 0x66, 0x6d, 0x7d, 0x07, 0x7f, 0x6f};
	DIO_write_port(portname,displayMap[number]);
}