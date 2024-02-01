#include <stdio.h>
#include "main.h"
/**
* swap_int - function that swaps the values of two integers.
*
* @a: swap variable
* @b: swap variable
*
* Return: void
*/
void swap_int(int *a, int *b)
{
int temp_value;
temp_value = *a;
*a = *b;
*b = temp_value;
}
