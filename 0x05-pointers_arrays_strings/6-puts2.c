#include "main.h"
/**
 * puts2 - this function print every second char of a string
 *
 * @str: this is the string to be evaluated
 *
 * Return: nothing
 */
void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (i == 0 || i % 2 == 0)
		{
			_putchar(str[i]);
		}
		i++;
	}
	_putchar('\n');
}
