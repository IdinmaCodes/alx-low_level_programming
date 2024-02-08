#include <stdio.h>

/**
 * print_tens_digit - Prints the tens digit of a number.
 * @number: The number from which to extract the tens digit.
 */
void print_tens_digit(int number);

/**
 * print_ones_digit - Prints the ones digit of a number.
 * @number: The number from which to extract the ones digit.
 */
void print_ones_digit(int number);

/**
 * main - Entry point of the program.
 *
 * Return: Always 0 (Success).
 */
int main(void)
{
	int number1, number2;

	for (number1 = 0; number1 < 90; number1++)
	{
		for (number2 = 0; number2 < 99; number2++)
		{
			if (number1 < number2)
			{
				print_tens_digit(number1);
				print_ones_digit(number1);
				putchar(' ');
				print_tens_digit(number2);
				print_ones_digit(number2);
				putchar(',');
				putchar(' ');
				putchar('\n');
			}
		}
	}

	return 0;
}

/**
 * print_tens_digit - Prints the tens digit of a number.
 * @number: The number from which to extract the tens digit.
 */
void print_tens_digit(int number)
{
	int tens_digit = number / 10;
	putchar(tens_digit + '0');
}

/**
 * print_ones_digit - Prints the ones digit of a number.
 * @number: The number from which to extract the ones digit.
 */
void print_ones_digit(int number)
{
	int ones_digit = number % 10;
	putchar(ones_digit + '0');
}
