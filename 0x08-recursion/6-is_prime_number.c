#include "main.h"
#include <stdio.h>

/**
 * is_prime_number - prints prime numbers only
 * @n: the number
 *
 * Return:1 if prime number
 */
int is_prime_number(int n)
{
	int i;

	if (n <= 1)
	{
		return (0);
	}
	if (n == 2 || n == 3)
	{
		return (1);
	}
	if (n % 2 == 0 || n % 3 == 0)
	{
		return (0);
	}
	for (i = 5; i * i <= n; i = 1 + 6)
	{
		if (n % i == 0 || n % (i + 2) == 0)
		{
			return (0);
		}
		return (1);
	}
	return (1);
}
