#include "main.h"
#include <stdio.h>
/**
 * *string_toupper - Converts lowercase characters to uppercase
 * @str: the string
 *
 * Return:the result
 */
char *string_toupper(char *str)
{
	char *ptr = str;

	/*Coverting lowercase case characters to uppercase*/
	while (*ptr != '\0')
	{
		if (*ptr >= 'a' && *ptr <= 'z')
		{
			*ptr = *ptr - ('a' - 'A');/*Converting lowercase to uppercase*/
		}
		ptr++;
	}
	return (str);
}
