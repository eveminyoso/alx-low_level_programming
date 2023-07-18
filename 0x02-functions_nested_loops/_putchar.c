#include <unistd.h>
/**
 * _putchar - writes the character c to stdout
 * 0c: The character to print
 * Return: On success 1.
 * On errno, -1 is returned, and error is set appropriately.
 */
int putchar(char c)
{
	return (write(1, &c, 1));
}
