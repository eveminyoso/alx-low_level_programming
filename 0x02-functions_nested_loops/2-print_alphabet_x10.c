#include "main.h"

/**
 * 2-print_alphabet_x10 - print 10 times the alphabet, in lowercase
 * followed by a new line
 */
int main(void)
{
void print_alphabet_x10(void)
	char ch;
	int i;

	i = 0;
	while (i < 10)
	{
		ch = ' ';
		while (ch <= 'z')
		{
			_putchar(ch);
			ch++;
		}
		_putchar('\n');
		i++;
	}
}
