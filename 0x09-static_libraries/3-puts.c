#include "main.h"
#include <stdio.h>

/**
 * _puts - print a string followed by new line
 * @s: character to be described
 */
void _puts(char *s)
{
	while (*s != '\0')
	{
		s++;
	}
		putchar('\n');
}
