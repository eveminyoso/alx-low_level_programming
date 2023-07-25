#include "main.h"
#include <stdio.h>
/**
 * print_rev - prints in reverse
 * @s: the string
 *
 */
void print_rev(char *s)
{
	int c;

	c = 0;

	while (s[c] != '\0')
	{
		c++;
	}
	for (c -= 1; c >= 0; c--)
	{
		putchar(s[c]);
	}
	putchar('\n');
}
