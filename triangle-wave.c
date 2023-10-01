#include <LPC17xx.H>

int main ()
{
	unsigned long int temp=0x00000000; 
	unsigned int i=0;
  
  LPC_PINCON->PINSEL0 &= 0xFF0000FF ;						// Configure P0.4 to P0.11 as GPIO
	LPC_GPIO0->FIODIR  |= 0x00000FF0 ;
	   
    while(1)
    {
    	//output 0 to FE 
        for(i=0;i!=0xFF;i++)
        {
        	temp=i;
        	temp = temp << 4;
        	LPC_GPIO0->FIOPIN = temp;
        }
       	// output FF to 1   
        for(i=0xFF; i!=0;i--)
        {
        	temp=i;
        	temp = temp << 4;
        	LPC_GPIO0->FIOPIN = temp;
        }
	}//End of while(1)
}//End of main()