#include "main.h"
/**
 * print_number - function print number with only _putchar and without array
 *
 * @n: number to be printed
 *
 * Return: void
 */
void print_number(int n)
{
	int temp;

	if (n < 0)
	{
		n = n * (-1);
		temp = n;
		_putchar('-');
	}
	else
	{
		temp = n;
	}
	if (temp / 10 != 0)
	{
		print_number(temp / 10);
	}
	_putchar((temp % 10) + '0');
}
