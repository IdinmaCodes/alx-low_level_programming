#include <stdio.h>
#include "main.h"
/**
* jack_bauer - Prints every minute of a day in the format HH:MM
*/
void jack_bauer(void)
{
int hour;
int minute;
for (hour = 0; hour < 24; hour++)
{
for (minute = 0; minute < 60; minute++)
{
int hour_tens = hour / 10;
int hour_units = hour % 10;
int minute_tens = minute / 10;
int minute_units = minute % 10;
putchar(hour_tens + '0');
putchar(hour_units + '0');
putchar(':');
putchar(minute_tens + '0');
putchar(minute_units + '0');
putchar('\n');
}
}
}
