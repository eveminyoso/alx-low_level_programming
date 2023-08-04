#include "main.h"
/**
 * _memset - fill a block of memory with a specifivc value
 * @s: starting address to the memory to be filled
 * @b: the desired value
 * @n: number of bytes to be changed
 *
 * Return: changed arrays with new value for n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
