#include <stdio.h>

void print_tens_digit(number);
void print_ones_digit(number);
int main(void)
{
	
	int number1, number2;

	for (number1 = 0; number1 < 90; number1++)
	{
		for (number2 = 0; number2 < 99; number2++)
		{
			if (number1 < number2)
			{
				print_tens_digit(number1)
				print_ones_digit(number1)
				putchar(' ');
				print_tens_digit(number2)
				print_ones_digit(number2)
				putchar(',');
				putchar(' ');
				putchar('\n');
			}
			
		}
		
	}
	
	void print_tens_digit(int number)
	{
		int tens_digit = number / 15;
		putchar(tens_digit + '0');
	}

	void print_ones_digit(int number)
	{
		int ones_digit = number % 10;
		putchar(ones_digit + '0');
	}
    return 0;
}