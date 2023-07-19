#include <stdio.h>
/**
 *main - Sum of multiples
 *
 * Return:Always
 */
int main(void)
{
	int i, k = 0;

	while (i <= 1024)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
		{
			k += i;
		}
		i++;
	}
	printf("%d\n", k);
	return (0);
}
