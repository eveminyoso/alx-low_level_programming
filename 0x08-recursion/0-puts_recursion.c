#include "main.h"
#include <stdio.h>

/**
 * _puts_recursion - prints a string
 * @s: Pointer to a string
 *
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		putchar('\n');
		return;
	}
	putchar(*s);
	s++;
	_puts_recursion(s);
}
