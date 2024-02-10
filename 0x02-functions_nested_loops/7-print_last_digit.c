#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * print_last_digit - function that prints the last digit of a number
 *
 * Returns the value of the last digit
 */

int print_last_digit(int n)
{
    int last_digit;
    n = abs(n);

    last_digit = n % 10;

    _putchar(last_digit + '0');
    return(last_digit);
}
