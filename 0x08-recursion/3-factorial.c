#include "main.h"
/**
 * factorial - function returns factorial of given int
 *
 * @n: given number
 *
 * Return: -1 if n < 0; returns factorial
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
	{
		return (1);
	}
		return (n * factorial(n - 1));
}
