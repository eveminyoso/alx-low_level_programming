#include "main.h"
#include <stdio.h>
/**
 * main - prints the number of arguements
 *
 * @argc: Counts the arguements
 * @argv:arguements array
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	(void)argv;

	printf("%d\n", argc - 1);
	return (0);
}
