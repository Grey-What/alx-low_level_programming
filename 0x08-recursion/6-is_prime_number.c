#include "main.h"
/**
 * find_prime - determines if a value is a prime number and what is is
 *
 * @n: given number
 * @i: iterator to test different factors
 *
 * Return: 1 if n is prime, else 0
 */
int find_prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (find_prime(n, i - 1));
}

/**
 * is_prime_number - determines if a input is a prime number
 *
 * @n: value to determine if it is a prime
 *
 * Return: 1 if prime else 0
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);

	return (find_prime(n, n - 1));
}
