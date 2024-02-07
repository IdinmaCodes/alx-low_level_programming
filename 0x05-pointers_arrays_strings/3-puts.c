#include <stdio.h>
#include "main.h"
/**
* _puts - Prints a string, followed by a new line, to stdout
* @str: Pointer to the string to be printed
*
* Description:
* This function iterates through each character of the input string
* and prints it to the standard output using putchar. It adds a newline
* character at the end to move to the next line.
*/
void _puts(char *str)
{
int index = 0;
while (*str != '\0')
{
putchar(*str);
index = index + 1;
str = str + 1;
}
putchar('\n');
}
