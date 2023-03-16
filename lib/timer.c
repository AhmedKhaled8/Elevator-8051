#include "timer.h"
#include "REG51F020.H"

void timer_init(int timer_index)
{
    if (timer_index == 0)
    {
        /*--------------------------------------
        Set Timer0 for 16-bit timer mode.  The
        timer counts to 65535, overflows, and
        generates an interrupt.

        Set the Timer0 Run control bit.
        --------------------------------------*/
        TMOD = (TMOD & 0xF0) | 0x01;  /* Set T/C0 Mode */
        ET0 = 1;                      /* Enable Timer 0 Interrupts */
        TR0 = 1;                      /* Start Timer 0 Running */
        EA = 1;                       /* Global Interrupt Enable */
        TL0=0x00;
        TH0=0x00;
    }
    if(timer_index == 1)
    {
        /*--------------------------------------
        Set Timer1 for 16-bit timer mode.  The
        timer counts to 65535, overflows, and
        generates an interrupt.

        Set the Timer1 Run control bit.
        --------------------------------------*/
        TMOD = (TMOD & 0x0F) | 0x10;  /* Set T/C0 Mode */
        ET1 = 1;                      /* Enable Timer 1 Interrupts */
        TR1 = 1;                      /* Start Timer 1 Running */
        EA = 1;                       /* Global Interrupt Enable */
        TL1=0x00;
        TH1=0x00;
    }
}


void timer_close(int timer_index)
{
    if(timer_index == 0)
    {
        /*--------------------------------------
        Clear the Timer0 Run control bit.
        --------------------------------------*/
        ET0 = 0;    /* disable Timer 0 Interrupts */
        TR0 = 0;    /* Stop Timer 0 Running */
        EA = 0;     /* Global Interrupt Disable */
        TL0=0x00;
        TH0=0x00;
    }
    if(timer_index == 1)
    {
        /*--------------------------------------
        Clear the Timer1 Run control bit.
        --------------------------------------*/
        ET1 = 0;    /* disable Timer 1 Interrupts */
        TR1 = 0;    /* Stop Timer 1 Running */
        EA = 0;     /* Global Interrupt Disable */
        TL1=0x00;
        TH1=0x00;
    }
}

void delay(char value)   //Delay Function
{
    char i, j;
    for(i=0; i <= value; i++)
    for(j=0; j <= 5; j++);
}
