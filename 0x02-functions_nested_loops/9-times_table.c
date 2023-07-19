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
			int fdigt = ans / 10;
			int ldigt = ans % 10;

			if (fdigt > 0)
			{
				_putchar(fdigt + 48);
			}
			else
			{
				_putchar(' ');
			}
			if (j < 9)
			{
				_putchar(ldigt + 48);
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				_putchar(ldigt + 48);
			}
			j++;
		}
		_putchar('\n');
		i++;
	}
}
