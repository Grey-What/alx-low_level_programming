#include "main.h"
/**
 * print_rev - function prints string in reverse followed by new line
 *
 * @s: this is the string to be reverse printed
 *
 * Return: nothing
 */
void print_rev(char *s)
{
	int i = 0;
	int e, leng;

	while (s[i] != '\0')
	{
		i++;
	}
	leng = i;

	for (e = leng - 1; e >= 0; e--)
	{
		_putchar(s[e]);
	}
	_putchar('\n');
}
