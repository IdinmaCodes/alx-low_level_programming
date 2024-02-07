#include <stdio.h>
/**
* main - program that prints all possible combinations of single-digit
*            numbers separated by commas and spaces
*
* Return: 0 on success
*/
int main(void)
{
int digit;
for (digit = 0; digit <= 9; digit++)
{
putchar(digit + '0');
if (digit != 9)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
