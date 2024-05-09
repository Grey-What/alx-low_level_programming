#include "search_algos.h"
/**
 * linear_search - searches an array using linear search
 *
 * @array: int array to search
 * @size: size of array
 * @value: int value to search for
 *
 * Return: first index of searched value, else -1
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (!array)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n",
		       i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
