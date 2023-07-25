#include "main.h"
/**
 *  print_rev - a function that prints a string,
 *  in reverse, followed by a new line
 *  @s: string
 *  return: 0
 */
void print_rev(char *s)
{
	int o = 0;

	while (s[o] != '\0')
	{
		o++;
	}
	for (o -= 1; o >= 0; o--)
	{
		putchar(*s);
		s--;
	}
	putchar('\n');
}
