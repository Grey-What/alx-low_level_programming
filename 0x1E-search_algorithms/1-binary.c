#include "search_algos.h"
/**
 * print_array - print a formated array
 *
 * @array: array to print
 * @start: start of array
 * @end: end of array
 *
 * Return: void
 */
void print_array(int *array, size_t start, size_t end)
{
	size_t i = start;

	printf("Searching in array: ");
	for (i = start; i <= end; i++)
	{
		if (i == end)
			printf("%d\n", array[i]);
		else
			printf("%d, ", array[i]);
	}
}
/**
 * binary_search - search an array with binary search
 *
 * @array: int array to be searched
 * @size: size of array
 * @value: value to search for
 *
 * Return: index of value, else -1
 */
int binary_search(int *array, size_t size, int value)
{
	size_t left = 0;
	size_t right = size - 1;
	size_t mid = 0;

	while (left <= right)
	{
		mid = (left + right) / 2;
		print_array(array, left, right);

		if (array[mid] < value)
			left = mid + 1;
		else if (array[mid] > value)
			right = mid - 1;
		else
			return (mid);
	}
	return (-1);
}
