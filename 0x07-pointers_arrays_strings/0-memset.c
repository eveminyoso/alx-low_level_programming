#include "main.h"
#include <stdio.h>
/**
 * *_memset - fills the first bytes of the memory
 * @s:Pointer to char variable
 * @b:Constant byte to be stored
 * @n:Number of bytes
 *
 * Return:the stored value
 *
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
