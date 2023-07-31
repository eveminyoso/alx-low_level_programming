#include "main.h"
#include <stdio.h>
/**
 * _memcpy - prints Copied bytes from memory area
 * @dest:pointer to destination
 * @src:pointer to source
 * @n:number of bytes
 *
 * Return:the copied bytes
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
