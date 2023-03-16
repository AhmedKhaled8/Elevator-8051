/*
*  DIO library for 8051
*/

#include "DIO.h"

void DIO_vsetPINDir(unsigned char portname, unsigned char pinnumber, unsigned char direction)
{
	switch (portname)
	{

	case '0':
		if (direction == 1)
		{
			SET_BIT(P0MDOUT, pinnumber); //Set the direction of the given pin in port 0 as output
		}
		else
		{
			CLR_BIT(P0MDOUT, pinnumber); //Set the direction of the given pin in port 0 as input
			SET_BIT(P0, pinnumber);		 //Set mode to high impedence
		}
		break;
	case '1':
		if (direction == 1)
		{
			SET_BIT(P1MDOUT, pinnumber); //Set the direction of the given pin in port 1 as output
		}
		else
		{
			CLR_BIT(P1MDOUT, pinnumber); //Set the direction of the given pin in port 1 as input
			SET_BIT(P1, pinnumber);		 //Set mode to high impedence
		}
		break;
	case '2':
		if (direction == 1)
		{
			SET_BIT(P2MDOUT, pinnumber); //Set the direction of the given pin in port 2 as output
		}
		else
		{
			CLR_BIT(P2MDOUT, pinnumber); //Set the direction of the given pin in port 2 as input
			SET_BIT(P2, pinnumber);		 //Set mode to high impedence
		}
		break;
	case '3':
		if (direction == 1)
		{
			SET_BIT(P3MDOUT, pinnumber); //Set the direction of the given pin in port 3 as output
		}
		else
		{
			CLR_BIT(P3MDOUT, pinnumber); //Set the direction of the given pin in port 3 as input
			SET_BIT(P3, pinnumber);		 //Set mode to high impedence
		}
		break;
	default:
		break;
	}
}

void DIO_write(unsigned char portname, unsigned char pinnumber, unsigned char outputvalue)
{
	switch (portname)
	{
	case '0':

		if (outputvalue == 1)
		{
			SET_BIT(P0, pinnumber); //Set the value of the given pin in port 0 as High
		}
		else
		{
			CLR_BIT(P0, pinnumber); //Set the value of the given pin in port 0 as Low
		}
		break;
	case '1':

		if (outputvalue == 1)
		{
			SET_BIT(P1, pinnumber); //Set the value of the given pin in port 1 as High
		}
		else
		{
			CLR_BIT(P1, pinnumber); //Set the value of the given pin in port 1 as Low
		}
		break;
	case '2':

		if (outputvalue == 1)
		{
			SET_BIT(P2, pinnumber); //Set the value of the given pin in port 2 as High
		}
		else
		{
			CLR_BIT(P2, pinnumber); //Set the value of the given pin in port 2 as Low
		}
		break;
	case '3':

		if (outputvalue == 1)
		{
			SET_BIT(P3, pinnumber); //Set the value of the given pin in port 3 as High
		}
		else
		{
			CLR_BIT(P3, pinnumber); //Set the value of the given pin in port 3 as Low
		}
		break;
	default:
		break;
	}
}

unsigned char DIO_u8read(unsigned char portname, unsigned char pinnumber)
{
	unsigned char return_value = 0;
	switch (portname)
	{
	case '0':
		return_value = READ_BIT(P0, pinnumber); //Read the value from the given pin in port 0
		break;

	case '1':
		return_value = READ_BIT(P1, pinnumber); //Read the value from the given pin in port 1
		break;

	case '2':
		return_value = READ_BIT(P2, pinnumber); //Read the value from the given pin in port 2
		break;

	case '3':
		return_value = READ_BIT(P3, pinnumber); //Read the value from the given pin in port 3
		break;
	default:
		break;
	}
	return return_value;
}
void DIO_toggle(unsigned char portname, unsigned char pinnumber)
{
	switch (portname)
	{
	case '0':
		TOG_BIT(P0, pinnumber); //Toggle the value of the given pin in port 0
		break;
	case '1':
		TOG_BIT(P1, pinnumber); //Toggle the value of the given pin in port 1
		break;
	case '2':
		TOG_BIT(P2, pinnumber); //Toggle the value of the given pin in port 2
		break;
	case '3':
		TOG_BIT(P3, pinnumber); //Toggle the value of the given pin in port 3
		break;
	default:
		break;
	}
}
void DIO_set_port_direction(unsigned char portname, unsigned char direction)
{
	switch (portname)
	{
	case '0':
		if (direction == 1)
		{
			P0MDOUT = 0xff; //set the direction of port 0 as output
		}
		else
		{
			P0MDOUT = 0x00; //set the direction of port 0 as input
			P0 = 0xff;		//set the port mode to high impedence
		}
		break;
	case '1':
		if (direction == 1)
		{
			P1MDOUT = 0xff; //set the direction of port 0 as output
		}
		else
		{
			P1MDOUT = 0x00; //set the direction of port 0 as input
			P1 = 0xff;		//set the port mode to high impedence
		}
		break;
	case '2':
	if (direction == 1)
		{
			P2MDOUT = 0xff; //set the direction of port 0 as output
		}
		else
		{
			P2MDOUT = 0x00; //set the direction of port 0 as input
			P2 = 0xff;		//set the port mode to high impedence
		}
		break;
	case '3':
	if (direction == 1)
		{
			P3MDOUT = 0xff; //set the direction of port 0 as output
		}
		else
		{
			P3MDOUT = 0x00; //set the direction of port 0 as input
			P3 = 0xff;		//set the port mode to high impedence
		}	
		break;
	default:
		break;
	}
}
void DIO_write_port(unsigned char portname, unsigned char portvalue)
{
	switch (portname)
	{
	case '0':
		P0 = portvalue; //Write the given value to the port 0
		break;
	case '1':
		P1 = portvalue; //Write the given value to the port 1
		break;
	case '2':
		P2 = portvalue; //Write the given value to the port 2
		break;
	case '3':
		P3 = portvalue; //Write the given value to the port 3
		break;
	default:
		break;
	}
}

unsigned char DIO_read_port(unsigned char portname)
{
	unsigned char return_val = 0;
	switch (portname)
	{
	case '0':
		return_val = P0; // read the value of port 0
		break;
	case '1':
		return_val = P1; // read the value of port 1
		break;
	case '2':
		return_val = P2; // read the value of port 2
		break;
	case '3':
		return_val = P3; // read the value of port 3
		break;
	default:
		break;
	}
	return return_val;
}