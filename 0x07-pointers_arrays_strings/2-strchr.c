#include "main.h"
#include <stdio.h>
/**
 * *_strchr - Locates the character in a string
 * @s:pointer to the string
 * @c:Character to be located
 *
 * Return:Null
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (*s == c)
	{
		return (s);
	}
	return (NULL);
}
