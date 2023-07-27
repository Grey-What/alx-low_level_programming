#include "main.h"
/**
 * reverse_array - this funcntion reverses array
 *
 * @a: this is the array to be reversed
 * @n: this is the number of elements in array
 *
 * Return: nothing
 */
void reverse_array(int *a, int n)
{
	int i = 0;
	int count;
	int temp;

	count = n - 1;

	while (i < n / 2)
	{
		temp = a[i];
		a[i] = a[count];
		a[count--] = temp;
		i++;
	}
}
