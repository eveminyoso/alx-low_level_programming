#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * **alloc_grid - 2-dimensional array of integers
 * @width: the width of grid
 * @height: the height of the grid
 *
 * Return:the grid
 */
int **alloc_grid(int width, int height)
{
	int h, w;
	int **grid;
	int i, j;

	w = width;
	h = height;
	if (w <= 0 || h <= 0)
	{
		return (NULL);
	}
	/*Allocating memory to array of pointers*/
	grid = malloc(h * sizeof(int *));

	if (grid == NULL)
	{
		free(grid);
		return (NULL);
	}
	/*Allocating memory for each row*/
	for (i = 0; i < h; i++)
	{
		grid[i] = malloc(w * sizeof(int));
		if (grid[i] == NULL)
		{
			for (j = 0; j >= 0; j--)
			{
				free(grid[j]);
			}
			free(grid);
			return (NULL);
		}
	}
	for (i = 0; i < h; i++)
	{
		for (j = 0; j < w; j++)
		{
			grid[i][j] = 0;
		}
	}
	return (grid);
}
