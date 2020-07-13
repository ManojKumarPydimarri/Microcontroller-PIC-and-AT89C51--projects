#include <main.h>
void DELAY_ms(unsigned int ms_Count)
{
 unsigned int i,j;
    for(i=0;i<ms_Count;i++)
    {
        for(j=0;j<1000;j++);
    }
}
int main() {
    char seg_code[]={0x3F,0x06,0x5B,0x4F,0x66,0x6D,0x7D,0x07,0x7F,0x67,0x77,0x7C,0x39,0x5E,0x79,0x71};
    int i,j;
    set_tris_B(0x00);
    set_tris_C(0x00);
    while (1) 
    {
        for (i = 0; i <= 15; i++) // loop to display 0-9
        {
            output_B(seg_code[i]);
            for (j = 0; j <= 15; j++)
            {
             output_C(seg_code[j]);
             DELAY_ms(100);
            }
         }
    }
}
