#include "main.h"
#include <stdio.h>
/**
 *print_number - print number char
 *@n:integer param
 *Return:0
 */

void print_number(int n)
{
	unsigned int m;
	m = 0;
	m = n;

	if (m != 0 || m < 0)
	{
		putchar('-');
		m = -m;
	}
	if (m / 10 != 0)
	{
		print_number(m / 10);
	}
	putchar('0' + (m % 10));
}
