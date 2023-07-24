#include <stdio.h>
#include "main.h"
/**
 * print_array - this function prints n number of elements in a array
 *
 * @a: this is the array
 * @n: the number of elements to be printed
 *
 * Return: nothing
 */
void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		if (i < n - 1)
		{
			printf("%d, ", a[i]);
		}
		else
		{
			printf("%d", a[i]);
		}
		i++;
	}
	putchar('\n');
}
