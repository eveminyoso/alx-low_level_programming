#include "main.h"
#include <stdio.h>
#include <math.h>
/**
 * checker - Prints the square root of a number
 * @n:Number
 * @base:the squared number
 * Return:its square root
 */
int checker(int n, int base)
{
	if (n * n == base)
	{
		return (n);
	}
	if (n * n > base)
	{
		return (-1);
	}
	return (checker(n + 1, base));
}
/**
 * _sqrt_recursion - prints the square root of a number
 * @n:number
 *
 * Return:result
 */
int _sqrt_recursion(int n)
{
	return (checker(1, n));
}
