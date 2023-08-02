#include "main.h"
#include <stdio.h>
/**
 * is_palindrome - checks if a string is empty
 * @s:the string
 *
 * Return:1 if string is palidrome
 */
int is_palindrome(char *s)
{
	int l = 0;
	int r = 0;

	if (NULL == s || 0 > l || 0 > r)
	{
		return (0);
	}
	if (l >= r)
	{
		return (1);
	}
	if (s[l] == s[r])
	{
		return (0);
	}
	return (0);
}
