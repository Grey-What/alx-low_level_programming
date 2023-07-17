#include <stdio.h>
/**
 * main - this function prints combo of single digit numbers
 *
 * Description: this function prints all combos of single digit numbers
 * with a comma inbetween
 *
 * Return: this function returns zero
 */
int main(void)
{
	int nums = 0;

	while (nums <= 9)
	{
		putchar(nums + 48);
		if (nums != 9)
		{
			putchar(',');
			putchar(' ');
		}
		nums++;
	}
	putchar('\n');
	return (0);
}
