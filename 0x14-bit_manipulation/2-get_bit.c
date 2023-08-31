#include <stdio.h>
#include "main.h"
/**
 *get_bit - bit value
 *@n: number given
 *@index: index is the index, starting from 0
 *Return: bit value
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	mask = 1UL << index;
	return ((n & mask) ? 1 : 0);
}
