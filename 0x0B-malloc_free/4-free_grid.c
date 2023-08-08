#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * free_grid - function frees 2d array created by prev
 *
 * @grid: pointer to 2D array
 * @height: height of array
 *
 * Return: nothing
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL && height == 0)
		return;

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}
