#include <reg52.h>
void delay(void);
void main(void)
{
	unsigned char seg_code[]={0x3F,0x06,0x5B,0x4F,0x66,0x6D,0x7D,0x07,0x7F,0x67,0x77,0x7C,0x39,0x5E,0x79,0x71};
	int i,j;
	while(1)
	{
	for(i=0;i<=15;i++)
	{
		P2=seg_code[i];
	  for(j=0;j<=15;j++)
      {
					P3=seg_code[j];
				  delay();
			}
		}
	}
}
void delay(void)
{
int j; int i;
for(i =0;i<1000;i++)
for(j=0;j<90;j++){
}
}