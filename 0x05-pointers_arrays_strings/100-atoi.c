#include "main.h"
#include <limits.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * _atoi - Converts a string to an integer
 * @s: Pointer to the string
 *
 * Return: The converted string
 */
int _atoi(char *s)
{
	int sign = 1; /*Initializing the sign to positive by default*/
	int result = 0;
	int digit;

	/*Step 1: Handling whitespace characters*/
	while (*s == ' ')
	{
		s++;
	}

	/*Step 2: Handling the sign*/
	while (*s == '+' || *s == '-')
	{
		if (*s == '-')
		{
			sign *= -1 ;/* Change the sign if a '-' is encountered*/
		}
		s++;
	}

	/*Step 3: Converting the sequence of digits to an integer*/
	while (*s >= '0' && *s <= '9')
	{
		digit = *s - '0'; /* Convert the character digit to an integer digit*/
		 /* Check for overflow before updating the result*/
		if (result > INT_MAX / 10 || (result == INT_MAX / 10 && digit > INT_MAX % 10))
		{
			/* Overflow, return INT_MAX for positive or INT_MIN for negative*/
			return ((sign == 1) ? (INT_MAX) : (INT_MIN));
		}
		result = result * 10 + digit;/*Update the result*/
		s++;
	}

	/*Step 4: Return the resulting integer with the correct sign*/
	return (result * sign);
}
