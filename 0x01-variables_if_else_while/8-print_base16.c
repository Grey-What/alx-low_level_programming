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
	char b10 = '0';
        char hexdec = 'a';
	int count;

	while (count <= 15)
	{
		if (count <= 9)
		{
			putchar(b10);
			b10++;
		}
	        else
		{
			putchar(hexdec);
			hexdec++;
		}
		count++;
	}
	putchar('\n');
	return (0);
}
