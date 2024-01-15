#include <stdio.h>
/**
* main - program that prints the alphabet in lowercase
*
* Return: 0 on success
*/
int main(void)
{
char letter = 97;
while (letter <= 122)
{
if (letter != 101 && letter != 113)
{
putchar(letter);
}
letter++;
}
putchar('\n');
return (0);
}
