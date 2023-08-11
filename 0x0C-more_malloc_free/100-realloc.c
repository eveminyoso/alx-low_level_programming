#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * _realloc - reallocates memory
 * @ptr: pointer to memory
 * @old_size: old memory size
 * @new_size: new mem size
 *
 * Return: ptr
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	int *n_ptr;

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		return (malloc(new_size));
	}
	if (new_size == old_size)
	{
		return (ptr);
	}
	n_ptr = realloc(ptr, new_size);
	if (n_ptr == NULL)
	{
		return (NULL);
	}

	return (n_ptr);
}
