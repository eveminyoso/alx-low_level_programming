#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_all - prints any arguement
 * @format: data type format
 */
void print_all(const char * const format, ...)
{
	unsigned int i = 0;
	char *nem = "", *it;
	va_list ap;

	va_start(ap, format);
	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%s%c", nem, (char)va_arg(ap, int));
				break;
			case 'i':
				printf("%s%d", nem, va_arg(ap, int));
				break;
			case 'f':
				printf("%s%f", nem, va_arg(ap, double));
				break;
			case 's':
				it = va_arg(ap, char*);
				if (!it)
				{
					it = "(nil)";
				}
				printf("%s%s", nem, va_arg(ap, char*));
				break;
			default:
				i++;
				continue;
		}
		nem = ", ";
		i++;
	}
	va_end(ap);
	printf("\n");
}
