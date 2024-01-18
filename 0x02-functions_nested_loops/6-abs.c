#include <stdio.h>
#include "main.h"
/**
* _abs - function that computes the absolute value of an integer
* @num: The integer to compute the absolute value for
*
* Return: The absolute value of num
*/
int _abs(int num)
{
if (num < 0)
{
num = num * -1;
}
return (num);
}
