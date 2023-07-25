#include "main.h"
#include <stdio.h>
/**
 * print_array - prints the values of the array
 * @a:pointer to the array
 * @n:number of elements
 *
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%i", a[i]);
		if (i != n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
