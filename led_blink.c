#include <reg52.h>
void delay(void);
sbit led = P1^0;
void main(void)
{
	int i=0;
	while(1)
	{
	
	if(i<10)
	{
		
		led=0;
		delay();
		led=1;
		delay();
		i++;
	}
	else
	led=0;
}
	}
void delay()
{
	int i,j;
	for(i=0;i<90;i++)
	for(j=0;j<1000;j++)
	{}
}
