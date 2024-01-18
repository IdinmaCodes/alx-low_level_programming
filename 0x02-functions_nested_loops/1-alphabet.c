#include <stdio.h>
#include "main.h"
/**
* main - function that prints the alphabet, in lowercase
*
* Return: 0 on success
*/
void print_alphabet(void)
{
char letter;
for (letter = 'a'; letter <= 'z'; letter++)
{
putchar(letter);
}
putchar('\n');
}
