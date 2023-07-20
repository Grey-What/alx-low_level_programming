#include "main.h"
/**
 * print_diagonal - this function prints a diagonal line on the terminal
 *
 * @n: this is the number of times a diagonal will be printed
 *
 * Description: this function prints a diagonal line if n is => than 0
 * with the putchar function
 *
 * Return: void
 */
void print_diagonal(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		i = 0;

		while (i < n)
		{
			int j = 0;

			while (j < n)
			{
				if (j == i)
				{
					_putchar('\\');
 				}
				else if (j < i)
				{
					_putchar(' ');
				}
				j++;
			}
			_putchar('\n');
			i++;

		}
	}
}
