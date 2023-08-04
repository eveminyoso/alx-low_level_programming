#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - prints the sum of arguements
 * @argc: Counts the arguements
 * @argv: arguements array
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;
	unsigned int k, sum = 0;
	char *e;

	if (argc > 1)
	{
		for (i = 0; i < argc; i++)
		{
			e = argv[i];

			for (k = 0; k < strlen(e); k++)
			{
				if (!(e[k] > 48 || e[k] < 57))
				{
					if (e[k] < 48 || e[k] > 57)
					{
						printf("Error\n");
					return (1);
					}
				}
			}
			sum += atoi(e);
			e++;
		}
		printf("%d\n", sum);
	}
	else
	{
		printf("0\n");
	}
	return (0);
}
