#include "main.h"
/**
 * times_table - this function prints the 9 times table
 *
 * Description: this function prints the 9 times table in matrix format
 */
void times_table(void)
{
	int i = 0;

	while (i <= 9)
	{
		int j = 0;

		while (j <= 9)
		{
			int ans = i * j;
			_putchar((ans / 10) + 48);
			_putchar((ans % 10 + 48));
			_putchar(' ');
			j++;
		}
		_putchar('\n');
		i++;
	}
}
