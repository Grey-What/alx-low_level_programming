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
	int temp = n;

	if (n < 0)
	{
		_putchar('-');
		temp = -temp;
	}
	if (temp / 10 != 0)
	{
		print_number(temp / 10);
	}
	_putchar((temp % 10) + '0');
}
