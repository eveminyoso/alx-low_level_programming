#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints multiple of two numbers
 * @argc: Counts the arguements
 * @argv: arguements array
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int n;
	int m;

	if (argc == 3)
	{
		n = atoi(argv[1]);
		m = atoi(argv[2]);
		printf("%d\n", m * n);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
