#include "main.h"
#include <stdio.h>

int check_prime(int n, int i);
/**
 * is_prime_number - checks if number is prime or not
 * @n:the number
 *
 * Return:integer
 */

int is_prime_number(int n)
{
	return (check_prime(n, 5));
}
/**
 * check_prime - checks if number is prime
 * @n:number to be checked
 * @i:number of iterations
 *
 * Return:if number is prime
 */
int check_prime(int n, int i)
{
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
	if (i * i > n)
	{
		return (1);
	}
	if (n % i == 0 || n % (i + 2) == 0)
	{
		return (0);
	}
	return (check_prime(n, i + 6));
}
