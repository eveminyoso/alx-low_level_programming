#include "main.h"
#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int is_palindrome_helper(char *s, int l, int r);
/**
 * is_palindrome_helper - checks if a string is empty
 * @s:the string
 * @l:number of letters
 * @r:number of letters
 *
 * Return:1 if string is palidrome
 */
int is_palindrome_helper(char *s, int l, int r)
{
	if (l >= r)
	{
		return (1); /* Base case: the string is a palindrome*/
	}

	if (s[l] != s[r])
	{
		return (0); /* Base case: the characters don't match, not a palindrome*/
	}

	return (is_palindrome_helper(s, l + 1, r - 1)); /*next pair characters*/
}
/**
 * is_palindrome - checks if a string is empty
 * @s:the string
 *
 * Return:1 if string is palidrome
 */
int is_palindrome(char *s)
{
	int length = strlen(s);

	if (s == NULL)
	{
		return (0); /* Handle NULL input*/
	}
	return (is_palindrome_helper(s, 0, length - 1));
}
