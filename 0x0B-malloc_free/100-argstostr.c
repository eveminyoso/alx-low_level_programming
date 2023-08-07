#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * argstostr - concatenates all arguments of your program
 * @ac: argument count
 * @av: argument vector
 * Return: pointer to a new string
 */
char *argstostr(int ac, char **av)
{
	int i, n, l = 0, r = 0;

	char *str;

	if (ac == 0 || av == NULL)
			return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (n = 0; av[i][n]; n++)
			l++;
	}
	l += ac;

	str = malloc(sizeof(char) * (l + 1));
	if (str == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
	for (n = 0; av[i][n]; n++)
	{
		str[r] = av[i][n];
		r++;
	}
	str[r] = '\n';
		r++;
	}
	str(r) = '\0';

	return (str);
}
