#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - prints a duplicated string from the memory
 * @str: the string
 *
 * Return:the duplicate
 */
char *_strdup(char *str)
{
	int i;
	int n;
	char *s;

	if (str == NULL)
	{
		return (NULL);
	}

	n = 0;
	while (str[n] != '\0')
	{
		n++;
	}

	/*Memory allocation */
	s = (char *)malloc((n + 1) * sizeof(char));

	/*If there is insufficient memory*/
	if (s == NULL)
	{
		return (NULL);
	}

	/*Copying every character to the new string*/
	for (i = 0; i < n; i++)
	{
		s[i] = str[i];
	}

	s[n] = '\0';

	return (s);
}
