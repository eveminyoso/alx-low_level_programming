#include "main.h"
#include <stdio.h>
/**
 * print_chessboard - prints a chessboard prototype
 * @a:pointer to the character given
 *
 */
void print_chessboard(char (*a)[8])
{
	int i = 0, j = 0;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			printf("%c", a[i][j]);
		}
		printf("\n");
	}
}
