#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints opscode
 * @ac: arguement size
 * @av: arguement array
 *
 * Return: Nothing
 */
int main(int ac, char *av[])
{
	int numbyt, i;
	char *mainPtr;

	if (ac != 2)
	{
		printf("Error\n");
		return (1);
	}
	numbyt = atoi(av[1]);
	if (numbyt < 0)
	{
		printf("Error\n");
		return (2);
	}
	mainPtr = (char *)main;
	for (i = 0; i < numbyt; i++)
	{
		if (i == numbyt - 1)
		{
			printf("%02hhx\n", mainPtr[i]);
			break;
		}
		printf("%02hhx", mainPtr[i]);
	}
	return (0);
}
