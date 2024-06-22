#include <REGX52.h>
sbit LED_PIN = P1^0;
void Delay_ms(int t){
	unsigned int i,x;
	for(i = 0;i<t;i++)
	{
		for(x = 0;x<123;x++)
		{
		}
}
}
void main()
{
		while(1)
		{
			LED_PIN = !LED_PIN;
			Delay_ms(2000);
		}
}