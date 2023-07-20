#include "main.h"
/**
 * print_numbers - this function prints digit 0 to 9
 *
 * Description - this function prints digit 0 to 9 with putchar in a loop
 *
 * return: this function returns nothing
 */
void print_numbers(void)
{
	int i = 0;

	while (i <= 9)
	{
		_putchar(i + 48);
		i++;
	}
	_putchar('\n');
}
