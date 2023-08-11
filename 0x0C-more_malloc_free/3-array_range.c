#include <stdlib.h>
#include "main.h"
/**
 * array_range - creates array of integers containing all number in a range
 *
 * @min: starting number of array
 * @max: end number of array
 *
 * Return: returns pointer to new array, otherwise NULL
 */
int *array_range(int min, int max)
{
	int size_arr;
	int i;
	int *arr;

	if (min > max)
		return (NULL);

	size_arr = max - min + 1;

	arr = malloc(sizeof(int) * size_arr);

	if (arr == NULL)
		return (NULL);

	for (i = 0; min <= max; i++)
	{
		arr[i] = min++;
	}
	return (arr);
}
