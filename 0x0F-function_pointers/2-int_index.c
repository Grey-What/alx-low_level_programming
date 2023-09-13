#include <stdio.h>
#include "function_pointers.h"
/**
 * int_index - function searches for an integer
 *
 * @array: array to be searched
 * @size: size of array
 * @cmp: pointer to callback function that compares values
 *
 * Return: -1 if size <= 0 and if no element match, else index of first
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;
	int index;

	if (size <= 0 || !array || !cmp)
		return (-1);

	while (i < size)
	{
		index = cmp(array[i]);

		if (index != 0)
		{
			return (i);
		}
		i++;
	}
	return (-1);
}
