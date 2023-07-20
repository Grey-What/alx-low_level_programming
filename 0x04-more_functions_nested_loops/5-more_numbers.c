#include "main.h"
/**
 * more_numbers - this function prints 0 to 14 ten times
 *
 * Description: this function prints 0 to 14 ten times and only use
 * _putchar 3 times
 *
 * Return: is void
 */
void more_numbers(void)
{
	int i = 1;
	int j;

	while (i <= 10)
	{
		j = 0;

		while (j <= 14)
		{
			if ((j / 10) != 0)
			{
				_putchar((j / 10) + 48);
			}
			_putchar((j % 10) + 48);
			j++;
		}
		_putchar('\n');
		i++;
	}
}
