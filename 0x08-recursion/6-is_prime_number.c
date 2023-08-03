#include "main.h"
/**
 * is_prime_number - function checks if number is a prime number
 *
 * @n: number to be evaluated
 *
 * Return: return 0 if not a prime, 1 if it is a prime
 */
int checker(int n, int a);

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (checker(n, n -1));
}
/**
 * checker - function determines if number has more than two functions
 *
 * @n: prime number
 * @a: factor
 *
 * Return: return 0 if not a prime, 1 if true
 */
int checker(int n, int a)
{
	if (a == 1)
		return (1);
	if (n % a == 0 && a > 0)
		return (0);
	return (checker(n, a -1));
}
