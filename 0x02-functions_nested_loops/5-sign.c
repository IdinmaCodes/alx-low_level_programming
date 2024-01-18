#include <stdio.h>
#include "main.h"
/**
* print_sign - unction that prints the sign of a numbe
* @n: character to be checked
*
* Return: 1 if positive, 0 if zero, -1 if negative
*/
int print_sign(int n)
{
if (n > 0)
{
putchar('+');
return (1);
}
else if (n == 0)
{
putchar('0');
return (0);
}
else
{
putchar('_');
return (-1);
}
}
