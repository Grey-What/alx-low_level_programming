#include "main.h"
/**
 * print_alphabet - this function prints the lower case alphabet
 *
 * Description: this function prints the lower case alphabet with the
 * _putchar function
 *
 * Return: this functions return value is void or zero
 */
void print_alphabet(void)
{
	char alpha = 'a';

	while (alpha <= 'z')
	{
		_putchar(alpha);
		alpha++;
	}
	_putchar('\n');
}
