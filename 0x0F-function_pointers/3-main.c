#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
int (*get_op_func(char *s))(int, int);
/**
 * main - Does a simple operation
 * @ac: arguement count
 * @av: arguement array
 * Return: nothing
 *
 */
int main(int ac, char *av[])
{
	int n1, n2;
	char opr;
	int result;
	int (*func)(int, int);

	if (ac != 4)
	{
		printf("Error\n");
		return (98);
	}

	n1 = atoi(av[1]);
	n2 = atoi(av[3]);

	func = get_op_func(av[2]);

	if (!func)
	{
		printf("Error\n");
		exit(99);
	}

	opr = *av[2];
	if ((opr == '/' || opr == '%') && n2 == 0)
	{
		printf("Error\n");
		exit(100);
	}
	result = func(n1, n2);
	printf("%d\n", result);
	return (0);
}
