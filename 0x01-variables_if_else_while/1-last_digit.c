#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - this function randomizes a number and then the last digit is printed
 *
 * Description: this function randomizes a number and then determine if the
 * the last digit meets the condition of one of the if statements to prompt the
 * string to be printed in response
 *
 * return: this functions return value is zero
 * Return: is equal to thenumber zero
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if ((n % 10) > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, n % 10);
	}
	if ((n % 10) == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, n % 10);
	}
	if ((n % 10) < 6 && (n % 10) != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, n % 10);
	}
	return (0);
}
