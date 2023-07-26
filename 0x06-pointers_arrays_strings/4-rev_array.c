#include "main.h"
#include <stdio.h>
/**
 * reverse_array - prints the array values in reverse
 * @a:Pointer to the array
 * @n: The characters in the array
 *
 */
void reverse_array(int *a, int n)
{
	int start = 0;/*Initializing start which is the index of the first element*/
	int end = n - 1;/*Index of the last element*/
	int temp;

	while (start < end)
	{
		/*Swapping the elements at start and end positions in the array*/
		temp = a[start];
		a[start] = a[end];
		a[end] = temp;

		/*Moving the starting and ending elements closer to each other*/
		start++;
		end--;
	}
}
