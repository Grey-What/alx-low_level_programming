#include "main.h"
/**
 * puts_half - this function prints only half a string
 *
 * @str: string to be evaluated
 *
 * Return: nothing
 */
void puts_half(char *str)
{
	int i = 0;
	int leng;
	int un_half;
	int half;

	while (str[i] != '\0')
	{
		i++;
	}

	leng = i - 1;
	half = leng / 2;
	un_half = (leng - 1) / 2;

	if (leng <= 0)
	{
		_putchar(' ');
	}
	else if (leng % 2 == 0)
	{
		while (half < leng)
		{
			_putchar(str[half + 1]);
			half++;
		}
		_putchar('\n');
	}
	else if (leng % 2 != 0)
	{
		while (un_half < leng)
		{
			_putchar(str[un_half + 1]);
			un_half++;
		}
		_putchar('\n');
	}
}
