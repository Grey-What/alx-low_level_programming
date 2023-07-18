#include "main.h"
/**
 * print_sign - this function prints the sign of a number
 *
 * @n: this value is the int value that will be evaluated
 *
 * Description: this function looks at a number (n) and determine if it is
 * positive, 0 or negative and then prints relevant sign and returns value
 *
 * Return: if n is negative ,return -1. if n is positive, return 1. if 0
 * return 0.
 */
int print_sign(int n)
{
	if (n > 1)
	{
		_putchar('+');
		return (1);
	}
	if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	return (0);
}
