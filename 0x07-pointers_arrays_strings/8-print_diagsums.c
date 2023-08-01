#include <stdio.h>
#include "main.h"
/**
 * print_diagsums - this function prints the sum of the two diagonals of square
 * matrix of integers
 *
 * @a: is the matrix of ints
 * @size: size of the matrix
 *
 * Return: nothing
 */
void print_diagsums(int *a, int size)
{
	int i;
	int j;
	int sum1 = 0;
	int sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 = sum1 + a[i * size + i];
	}

	for (j = size - 1 ; j >= 0; j--)
	{
		sum2 = sum2 + a[j * size + (size - j - 1)];
	}
	printf("%d, %d\n", sum1, sum2);
}
