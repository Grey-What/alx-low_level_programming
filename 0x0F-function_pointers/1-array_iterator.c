#include <stdio.h>
#include "function_pointers.h"
/**
 * array_iterator  -function executes a callback function on each element of arr
 *
 * @array: array to execute a function on each element of
 * @size: size of array number of elements
 * @action: pointer to callback function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	long unsigned int i;

	if (!array || !action || size == 0)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
