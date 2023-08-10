#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * array_range - creates an array of integers
 * @min: minimum value
 * @max: maximam value
 *
 * Return:pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int *m;
	int i, b;

	if (min > max)
	{
		return (NULL);
	}
	b = max - min + 1;
	m = (int *)malloc(b * sizeof(int));
	if (m == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < b; i++)
	{
		m[i] = min + i;
	}
	return (m);
}
