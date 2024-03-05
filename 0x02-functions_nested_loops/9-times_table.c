#include <stdio.h>
#include "main.h"
/**
*  times_table - a function that prints the 9 times table, starting with 0
*
* Description:
* This function generates and prints the multiplication table from 0 to 9
* It uses nested loops to iterate through each combination fo multiplicands,
* calculates the product, and prints the result formatted as a table.
*
* Return: void
*/
void times_table(void)
{
int i;
int j;
int result;
for (i = 0; i <= 9; i++)
{
for (j = 0; j <= 9; j++)
{
result = i * j;
if (result < 10)
{
if (j > 0)
{
putchar(' ');
}
putchar(result + '0');
}
else
{
putchar(result / 10 + '0');
putchar(result % 10 + '0');
}
if (j != 9)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
}
}
