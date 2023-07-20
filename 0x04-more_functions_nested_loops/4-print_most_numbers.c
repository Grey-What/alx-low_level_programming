#include "main.h"
/**
 * print_most_numbers - this function prints digits 0 to 9 except 2 and 4
 *
 * Description - this function prints digits 0 to 9 with putchar in a loop
 * except 2 and 4
 *
 * Return: void
 */
void print_most_numbers(void)
{
	int i = 0;

	while (i <= 9)
	{
		if (i != 2 && i != 4)
		{
			_putchar(i + 48);
		}
		i++;
	}
	_putchar('\n');
}
