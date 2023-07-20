#include "main.h"
/**
 * print_square - this function prints a square to the size of $size
 *
 * @size: is th esize of the square
 *
 * Description: this function prints a square of # to size of $size
 *
 * Return: void
 */
void print_square(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i = 0;
		int j;

		while (i < size)
		{
			j = 0;

			while (j < size)
			{
				_putchar('#');
				j++;
			}
			_putchar('\n');
			i++;
		}
	}
}
