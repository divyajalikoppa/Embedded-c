#include<LPC17xx.h>
int main(void)
{
	int i;
	while(1)
	{
		LPC_PINCON->PINSEL1 &=0XFFFcFFFF;
		LPC_GPIO0->FIODIR |=0X02000000;
		if(!(LPC_GPIO2->FIOPIN&0x00000800))
		{
			LPC_GPIO0->FIOSET=0X02000000;
		}
		else
		{
			LPC_GPIO0->FIOCLR=0X02000000;
		}
		
		
}
}