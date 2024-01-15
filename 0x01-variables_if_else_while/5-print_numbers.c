#include <stdio.h>
/**
* main -  program that prints all single digit numbers of base 10
*            starting from 0
*
* Return: 0 on success
*/
int main(void)
{
int digit = 0;
while (digit <= 9)
{
putchar(digit + '0');
digit++;
}
putchar('\n');
return (0);
}
