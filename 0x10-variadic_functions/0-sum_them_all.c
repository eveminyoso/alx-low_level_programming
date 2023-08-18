#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - sum of all arguements
 * @n: constant number
 * Return: sum
 *
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int k;
	int sum = 0;

	va_start(ap, n);
	for (k = 0; k < n; k++)
	{
		sum += va_arg(ap, int);
	}
	va_end(ap);
	return (sum);
}
