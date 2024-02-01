#include <stdio.h>
#include "main.h"
/**
 * _strlen - Function that returns the length of a string.
 * @s: Pointer to the string whose length is to be determined.
 *
 * Return: Length of the string.
 */
int _strlen(char *s)
{
int counter = 0;

while (*s != '\0')
{
	counter = counter + 1;
	s = s + 1;

}
return (counter);
}
