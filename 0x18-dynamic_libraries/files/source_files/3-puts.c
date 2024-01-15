#include "main.h"
/**
 * _puts - this function prints a string followed by newline to stdout
 *
 * @str: this is the string to be output to stdout
 *
 * Return: nothing
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
