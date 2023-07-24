#include "main.h"
#include <string.h>
/**
 * _strlen - prints the length of the string
 * @s: string to be checked
 * Return: length of the string
 */
int _strlen(char *s)
{
	int len;

	len = 0;
	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}
