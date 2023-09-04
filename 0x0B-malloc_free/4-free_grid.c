#include "main.h"
/**
 * free_grid - func frees allocated memory of a 2D array
 *
 * @grid: 2d array
 * @height: number of rows in array
 *
 * Return: void/nothing
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL || height == 0)
		return;

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}
