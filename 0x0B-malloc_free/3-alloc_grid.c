#include "main.h"
/**
 * alloc_grid - creates 2D array of int in newly allocated memory
 *
 * @width: number of ints per row
 * @height: number of rows
 *
 * Return: pointer to 2D array, else NULL
 */
int **alloc_grid(int width, int height)
{
	int i;
	int j;
	int **array;

	if (width <= 0 || height <= 0)
		return (NULL);

	array = malloc(sizeof(int *) * height);

	if (array == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		array[i] = malloc(sizeof(int) * width);

		if (array[i] == NULL)
			return (NULL);

		for (j = 0; j < width; j++)
		{
			array[i][j] = 0;
		}
	}

	return (array);
}
