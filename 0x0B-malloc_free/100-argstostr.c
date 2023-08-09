#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * argstostr - concatinates all arguements of a string
 * @ac: arguement count
 * @av: arguement array
 *
 * Return:s
 */
char *argstostr(int ac, char **av)
{
	char *s;
	int i, j;
	int c;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	for (j = 0; j < ac; j++)
	{
		if (*av[j] != '\0')
		{
			c += *av[j] + 1;
		}
	}

	s = (char *)malloc(c);
	if (s == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; ++i)
	{
		if (*av[i] != '\0' && av[i - 1])
		{
			*s = *av[i];
			printf("%s\n", av[i]);
		}
	}
	s[i] = '\0';
	return (s);
}
