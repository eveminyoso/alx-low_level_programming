#include <stdio.h>
#include "main.h"
/**
 *set_bit - sets the value of a bit to 1
 *@n: number given
 *@index: index
 *Return: 1 if successful
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (index >= sizeof(unsigned long int) * 8 || n == NULL)
	{
		return (-1);
	}

	mask = 1UL << index;
	*n |= mask;
	return (1);
}
