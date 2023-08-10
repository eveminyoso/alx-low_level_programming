#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _calloc - allocates memory for a array
 * @nmemb: number of elements
 * @size: size of elements
 *
 * Return: calloc;
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *n;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	n = (int *)calloc(nmemb, size);
	if (n == NULL)
	{
		return (NULL);
	}
	return (n);
}
