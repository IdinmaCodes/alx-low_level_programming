#include <stdio.h>
#include "main.h"
/**
* print_sign - unction that prints the sign of a numbe
* @n: character to be checked
*
* Return: 1 or 0 or -1
*/
int print_sign(int n)
{
char sign;
if (n > 0)
{
sign = '+';
putchar(sign);
return (1);
}
else if (n == 0)
{
sign = '0';
putchar(sign);
return (0);
}
else
{
sign = '-';
putchar(sign);
return (-1);
}
}
