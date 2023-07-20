#include "main.h"
/**
 * print_line - this function prints a line n number of times
 *
 * @n: thisis the number of times _ should be printed
 *
 * this function prints '_' n number of times with putchar, and line ends with
 * newline
 */
void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i = 1;

		while (i <= n)
		{
			_putchar('_');
			i++;
		}
		_putchar('\n');
	}
}
