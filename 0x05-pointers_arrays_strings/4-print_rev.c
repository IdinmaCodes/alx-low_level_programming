#include <stdio.h>
#include "main.h"
/**
* print_rev - Prints a string in reverse order, followed by a newline.
* @s: The input string.
*/
void print_rev(char *s)
{
int i = 0;
while (s[i] != '\0')
{
i++;
i--;
}
while (i >= 0)
{
	putchar(s[i]);
	i--;
}
putchar('\n');
}
