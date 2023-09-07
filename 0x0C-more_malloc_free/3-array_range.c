#include "main.h"
/**
 * array_range - function creates array of functions
 *
 * @min: start value
 * @max: end value
 *
 * Return: NULL if min is more than max or if malloc fails,else pointer to arr
 */
int *array_range(int min, int max)
{
	int len, i;
	int *arr;

	if (min > max)
		return (NULL);

	len = (max - min) + 1;

	arr = malloc(sizeof(int) * len);

	if (arr == NULL)
		return (NULL);

	for (i = 0; min <= max; i++)
	{
		arr[i] = min;
		min++;
	}

	return (arr);
}
