#include "main.h"
/**
 * print_triangle - this function prints a triangle to size
 *
 * @size: this is the size of the triangle in number of lines
 *
 * Description: this function prints a triangle with the number of line
 * specified with size and the number of # increase per line till total number
 * of # is equal to size
 *
 * Return: void
 */
void print_triangle(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int lines = 1;
		int hash, space;

		while (lines <= size)
		{
			for (space = size - lines ; space >= 1; space--)
			{
				_putchar(' ');
			}
			for (hash = 1; hash <= lines; hash++)
			{
				_putchar('#');
			}
			_putchar('\n');
			lines++;
		}
	}
}
