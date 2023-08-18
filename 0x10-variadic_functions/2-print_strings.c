#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_strings - prints strings with a separator
 * @separator: string to be printed
 * @n: number of arguements
 *
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	const char *sep;
	va_list ap;

	va_start(ap, n);
	for (i = 0; i < n; ++i)
	{
		sep = va_arg(ap, const char *);
		if (sep == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", sep);
		}

		if (i < n - 1 && (void *)separator != NULL)
		{
			printf("%s", separator);
		}
	}
	va_end(ap);
	printf("\n");
}
