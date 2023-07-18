#include "main.h"
/**
 * print_last_digit - this function prints th elast digit of a number
 *
 * @b: this is the number from which the last digit it to be printed
 *
 * Description: this function prints the last digit of a function with putchar
 *
 * Return: it returns the last digit of the number
 */
int print_last_digit(int b)
{
	int i;

	if (b < 0)
	{
		b = -b;
	}

	i = b % 10;
	_putchar(i + '0');
	return (i);
}
