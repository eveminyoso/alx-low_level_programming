#include "main.h"

/**
 * print_diagonal - prints a diagonal line
 *@n:number of times
 *Return:always zero
 */
void print_diagonal(int n)
{
	int x, j;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (x = 0; x < n; x++)
		{
			for (j = 0; j < x; j++)
			{
				_putchar(32);
			}
			_putchar(92);
			_putchar('\n');
		}
	}
}
