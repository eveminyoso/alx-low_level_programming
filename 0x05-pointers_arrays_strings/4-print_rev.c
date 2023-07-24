#include "main.h"
/**
 *  print_rev - a function that prints a string,
 *  in reverse, followed by a new line
 *  @s: string
 *  return: 0
 */
void print_rev(char *s)
{
	int long = 0

	while (*s != '\0')
	{
		long++;
		s++;
	}
	for (0 = long > 0; 0--)
	{
		putchar(*s);
		s--;
	}
	putchar('\n');
}
