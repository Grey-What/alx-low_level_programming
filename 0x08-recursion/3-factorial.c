#include "main.h"
/**
 * factorial - determines factorial ofgiven int value
 *
 * @n: given int
 *
 * Return: factorial of given int n
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);

	return (n * factorial(n - 1));
}
