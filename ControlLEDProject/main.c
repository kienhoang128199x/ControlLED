#include <REGX52.h>
#include "lib.h"
#define LED_ON_TIME 21600 // 6 hours
#define LED_OFF_TIME 64800 // 18 hours
#define ON 1
#define OFF 0
sbit LED_PIN = P1 ^ 0;
void delaySecond(int time)
{
	unsigned int t = 0;
	for(t = 0; t < time; t++)
	{
		delayMiliSecond(1000);
	}
}
void turnOnLED()
{
	LED_PIN = ON;
}
void turnOffLED()
{
	LED_PIN = OFF;
}


void main()
{
	while (1)
	{
		turnOnLED();
		delaySecond(LED_ON_TIME);
		turnOffLED();
		delaySecond(LED_OFF_TIME);
	}
}