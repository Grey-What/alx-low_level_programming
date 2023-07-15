#include <stdio.h>
/**
 * main - this function print the whole alphabet in lower case
 *
 * Description: this function prints the whole alphabet in lower case with the
 * putchar function
 *
 * Return: the main function returns a zero
 */
int main(void)
{
	char alpha = 'a';

	while (alpha <= 'z')
	{
		putchar(alpha);
		alpha++;
	}
        putchar('\n');
	return (0);
}
