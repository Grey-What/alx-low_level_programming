#include "main.h"
/**
 * print_binary - prints the binary representation of a number
 *
 * @n: the number
 *
 * Return: nothing
 */
void print_binary(unsigned long int n)
{
	int i, flag = 0;
	unsigned long int bit;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	for (i = 63; i >= 0; i--)
	{
		bit = n >> i;

		if (bit & 1)
		{
			_putchar('1');
			flag++;
		}
		else if (flag > 0)
		{
			_putchar('0');
		}
	}


}
