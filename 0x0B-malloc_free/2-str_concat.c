#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - concatenate two strings
 * @s1: first string
 * @s2: second string
 * Return: concatenated string
 */
char *str_concat(char *s1, char *s2)
{
	char *conct;
	int i, ci, len1 = 0, len2 = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[len1] != '\0')
		len1++;

	while (s2[len2] != '\0')
		len2++;

	conct = malloc(sizeof(char) * (len1 + len2 + 1));

	if (conct == NULL)
		return (NULL);
	for (i = 0; i < len1; i++)
		conct[i] = s1[i];

	for (ci = 0; ci < len2; ci++)
		conct[i + ci] = s2[ci];
	conct[i + ci] = '\0';

	return (conct);
}
