#include "INT.h"
void int_INIT(void)
{
	EA  = 1;	/* Enable global interrupt */
	EX0 = 1;    /* Enable Ext. interrupt0 */
	IT0 = 1;    /* Select Ext. interrupt0 on falling edge */
}

