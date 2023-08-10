#include <stdlib.h>
#include "main.h"
#include <string.h>

/**
 * *_memset - fills memory with a constant byte
 * @s: memory areas to be filled
 * @b: char to copy
 * @n: number of times to copy b
 *
 * Return: pointer to the memory area s
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}

/**
 * _calloc - allocates memory for an array and initializes it with zeros
 * @nmemb: number of elements in an array
 * @size: size of each element
 *
 * Return: pointer to allocated memory, or NULL if allocation fails
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(size * nmemb);

	if (ptr == NULL)
		return (NULL);

	memset(ptr, 0, nmemb * size);

	return (ptr);
}
