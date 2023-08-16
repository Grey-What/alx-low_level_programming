#include <stdlib.h>
#include "function_pointers.h"
/**
 * int_index - function searches for an integer
 *
 * @array: array to be searched for specified int
 * @size: size of array
 * @cmp: function that does comparision
 *
 * Return: index of element when cmp != 0; else -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array != NULL || cmp != NULL)
	{
		for (i = 0; i < size; i++)
		{
			cmp(array[i]);

			if (cmp(array[i]) != 0)
				return (i);
		}
	}
	return (-1);
}
