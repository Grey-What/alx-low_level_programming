#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints name of file it was compiled from, followed by newline
 *
 * Return: always 0
 */
int main(void)
{
	printf("%s\n", __FILE__);

	return (0);
}
