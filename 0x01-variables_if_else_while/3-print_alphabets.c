#include <stdio.h>
/**
* main -  program that prints the alphabet in lowercase,
*             and then in uppercase
*
* Return: 0 on success
*/
int main(void)
{
char letter = 97;
while (letter <= 122)
{
putchar(letter);
letter++;
}
letter = 65;
while (letter <= 90)
{
putchar(letter);
letter++;
}
putchar('\n');
return (0);
}
