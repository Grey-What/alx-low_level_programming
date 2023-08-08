#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * alloc_grid - function set memory location for 2D array of integers
 *
 * @width: width of matrix
 * @height: height of matrix
 *
 * Return: NULL on failure, else return pointer to 2D array
 */
int **alloc_grid(int width, int height)
{
	int **arr;
	int w, h;

	if (width <= 0 || height <= 0)
		return (NULL);

	arr = (int **)malloc(sizeof(int *) * height);

	if (arr == NULL)
		return (NULL);

	for (w = 0; w < height; w++)
	{
		arr[w] = (int *)malloc(sizeof(int) * width);

		if (arr[w] == NULL)
		{
			free(arr);

			for (h = 0; h <= w; h++)
				free(arr[h]);
			return (NULL);
		}
	}
	for (w = 0; w < height; w++)
	{
		for (h = 0; h < width; h++)
			arr[w][h] = 0;
	}
	return (arr);
}
