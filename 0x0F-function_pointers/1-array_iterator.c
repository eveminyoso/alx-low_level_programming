#include "function_pointers.h"
#include <stdio.h>
/**
 *array_iterator - executing function param
 *@array: array pointer to integer
 *@size: size of array
 *@action: function pointer
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array != NULL && action != NULL)
	{
		for (i = 0; i < size; i++)
		{
			(*action)(array[i]);
		}
	}
}
