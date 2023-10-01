#include <LPC17xx.H>

void delay(void);

int main ()
{
		LPC_PINCON->PINSEL0 &= 0xFF0000FF ;						// Configure P0.4 to P0.11 as GPIO
    LPC_GPIO0->FIODIR  |= 0x00000FF0 ;
   
	while(1)
    {
    	LPC_GPIO0->FIOPIN  = 0x00000FF0 ;
        delay();
        LPC_GPIO0->FIOCLR  = 0x00000FF0 ;
        delay();
    }
}   
 
void delay(void)
{
	unsigned int i=0;
   	for(i=0;i<=9500;i++);
}