#include <blink.h>
#use delay (clock=80000000)

void main()
{
while(1)
{
output_high(PIN_B0);
delay_ms(100);
output_low(PIN_B0);
delay_ms(100);


}
}
