#include <stdio.h>
/**
* main - program that prints the lowercase alphabet in reverse
*
* Return: 0 on success
*/
int main(void)
{
char letter = 122;
while (letter >= 97)
{
putchar(letter);
letter--;
}
putchar('\n');
return (0);
}
