#include "main.h"
#include <stdio.h>
/**
 * *_strpbrk - Locates the first occurence in a string of any of the bytes
 * @s: pointer to string
 * @accept: pointer to string
 *
 * Return: Null
 */
char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
		char *p = accept;

		while (*p != '\0')
		{
			if (*s == *p)
			{
				return (s);
			}
			p++;
		}
		s++;
	}
	return (NULL);
}
