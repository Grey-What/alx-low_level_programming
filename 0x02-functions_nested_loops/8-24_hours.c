#include "main.h"
/**
 * jack_bauer - this function prints every minute of every day
 *
 * Description: this function will print every ,inute of every day
 *
 * Return: return is void
 */
void jack_bauer(void)
{
	int i;

	i = 0;

	while (i < 24)
	{
		int j;

		j = 0;

		while (j < 60)
		{
			_putchar('0' + (i / 10));
			_putchar('0' + (i % 10));
			_putchar(':');
			_putchar('0' + (j / 10));
			_putchar('0' + (j % 10));
			_putchar('\n');
			j++;
		}
		i++;
	}
}
