#include "function_pointers.h"
#include <stdio.h>
/**
 * int_index - iterates through an array checking for an integer
 * @array: our array
 * @size: array size
 * @cmp: our comparison function
 * Return:-1 if no matching elements
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
	{
		return (-1);
	}
	if (array != NULL && cmp != NULL)
	{
		for (i = 0; i < size; i++)
		{
			if ((*cmp)(array[i]))
			{
				return (i);
			}
		}
	}
	return (-1);
}
