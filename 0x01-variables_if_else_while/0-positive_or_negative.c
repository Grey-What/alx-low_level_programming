#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - this functio nrandomize a number and display it's relationship to 0
 *
 * Description: this function randomizes a number and then determine via if
 * statements if it is positve, zero, or negative
 *
 * return: this functions return value is zero
 * Return: is equal to thenumber zero
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	return (0);
}
