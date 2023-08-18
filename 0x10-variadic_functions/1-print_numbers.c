#include "variadic_functions.h"
/**
 * print_numbers - printing numbers with new line
 * @separator: strings
 * @n: number of arguements
 *
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	va_start(ap, n);
	for (i = 0; i < n; ++i)
	{
		printf("%d", va_arg(ap, int));
		if (i < n - 1 && (void *)separator != NULL)
		{
			printf("%s", separator);
		}
	}
	va_end(ap);
	printf("\n");
}
