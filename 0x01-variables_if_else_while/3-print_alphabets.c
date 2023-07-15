#include <stdio.h>
/**
 * main - this function print the whole alphabet in lower case and upper case
 *
 * Description: this function prints the whole alphabet in lower and upper case
 * with the putchar function
 *
 * Return: the main function returns a zero
 */
int main(void)
{
	char alphalow = 'a';
	char alphacap = 'A';

	while (alphalow <= 'z')
	{
		putchar(alphalow);
		alphalow++;
	}
	while (alphacap <= 'Z')
	{
		putchar(alphacap);
		alphacap++;
	}
	putchar('\n');
	return (0);
}
