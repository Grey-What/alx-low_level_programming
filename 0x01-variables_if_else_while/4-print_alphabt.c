#include <stdio.h>
/**
 * main - this function print the whole alphabet in lower case exept
 * 'q' and 'e'
 *
 * Description: this function prints the whole alphabet in lower case with the
 * putchar function except 'q' and 'e'
 *
 * Return: the main function returns a zero
 */
int main(void)
{
	char alpha = 'a';

	do {
		if (alpha != 'e' && alpha != 'q')
		{
			putchar(alpha);
			alpha++;
		}
		else
		{
			alpha++;
		}
	} while (alpha <= 'z');
	putchar('\n');
	return (0);
}
