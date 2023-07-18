#include "main.h"
/**
 * print_alphabet_x10 - this function prints the lower case alphabet 10 times
 *
 * Description: this function prints the lower case alphabet with the
 * _putchar function 10 times followed by a new line
 *
 * Return: this functions return value is void or zero
 */
void print_alphabet_x10(void)
{
	int counter = 1;

	while (counter <= 10)
	{
		char alpha = 'a';

		while (alpha <= 'z')
		{
			_putchar(alpha);
			alpha++;
		}
		_putchar('\n');
		counter++;
	}
}
