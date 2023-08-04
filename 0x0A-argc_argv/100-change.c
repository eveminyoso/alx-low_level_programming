#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the minimum number of coins to make change
 * @argc: number of arguements int the program
 * @argv: array of pointers to the arguements
 *
 * Return:0
 */
int main(int argc, char *argv[])
{
	int cnt, cns = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cnt = atoi(argv[1]);

	while (cnt > 0)
	{
		cns++;
		if ((cnt - 25) >= 0)
		{
			cnt -= 25;
			continue;
		}
		if ((cnt - 10) >= 0)
		{
			cnt -= 10;
			continue;
		}
		if ((cnt - 5) >= 0)
		{
			cnt -= 5;
			continue;
		}
		if ((cnt - 2) >= 0)
		{
			cnt -= 2;
			continue;
		}
		cnt--;
	}
	printf("%d\n", cns);
	return (0);
}
