#include <stdio.h>
/**
 *fibonacci_sequence - This function will generate and print fibonacci numbers
 *@a:stores the first last number
 *@b:stores the last last number
 *@limit:parameter to store value
 *
 *Return: Always 0
 */
void fibonacci_sequence(int limit)
{
	int a, b;
	int count;
	int temp;

	a = 1;
	b = 2;

	while (count < limit)
	{
		if (count < limit - 1)
		{
			printf("%d, ", a);
		}
		else
		{
			printf("%d\n", a);
		}

		temp = b;
		b = a + b;
		a = temp;
		count++;
	}
}
/**
 * main - calls the function fibonacci_sequence
 * Return:Success value 0
 */
int main(void)
{
	fibonacci_sequence(98);
	return (0);
}
