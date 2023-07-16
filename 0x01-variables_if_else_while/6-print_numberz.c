#include <stdio.h>
/**
 * main - this function prints all digits sigal digit numbers of base 10
 *starting
 *
 * Description: this function prints all single digit numbers of base 10
 *
 * Return: this return value is zero
 */
int main(void)
{
	int b10 = '0';

	while (b10 <= '9')
	{
		putchar(b10);
		b10++;
	}
	putchar('\n');
	return (0);
}
