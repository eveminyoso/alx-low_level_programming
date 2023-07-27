#include "main.h"
#include <stddef.h>
#include <stdio.h>
/**
 * *_strncpy - copies the last line of the string
 * @dest:Where the line will be copied to and still be the first address
 * @src: The line to be copied
 * @n: the number of characters
 *
 *
 * Return: The result
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for (; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
