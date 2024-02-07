#include <stdio.h>
/**
* main - program that prints the alphabet in lowercase
*
* Return: 0 on success
*/
int main(void)
{
char letter;
letter = 'a';
while (letter <= 'z')
{
putchar(letter);
letter++;
}
putchar('\n');
return (0);
}
