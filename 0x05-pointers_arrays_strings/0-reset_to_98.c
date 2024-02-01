#include <stdio.h>

/**
 * reset_to_98 - function that takes a pointer to an int as parameter
 *                   and updates the value it points to to 98
 *
 * @int_ptr: Pointer to an integer
 * Return: 0 on success
*/

int reset_to_98(int_ptr)
{
	*int_ptr = 98;
	return (0);
}