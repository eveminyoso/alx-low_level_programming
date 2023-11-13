#include "main.h"
/**
 *_puts - adds a character
 *@s:the string
 */
void _puts(char *s)
{
	while (*s != '\0')
	{
		_putchar(*s);
		s++;
	}
	_putchar('\n');
}
