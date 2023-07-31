#include "main.h"
#include <stdio.h>
/**
 * _strspn - gets the length of a prefix substring
 * @s:the initial segment
 * @accept:pointer to a string
 *
 * Return:the length of string
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int len = 0;

	while (*s != '\0')
	{
		char *p = accept;

		while (*p != '\0')
		{
			if (*s == *p)
			{
				len++;
				break;
			}
			p++;
		}
		if (*p == '\0')
		{
			break;
		}
		s++;
	}

	return (len);
}
