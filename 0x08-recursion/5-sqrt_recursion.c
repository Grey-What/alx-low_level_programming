#include "main.h"
/**
 * real_sqr - determines if a number has a natural root
 *
 * @n: number who's natural square must be found
 * @r: root to be trailed
 *
 * Return: returns natural square root of number, or -1 if non
 */
int real_sqr(int r, int n)
{
	if (r * r == n)
	{
		return (r);
	}
	if (r * r > n)
	{
		return (-1);
	}
	return (real_sqr(r + 1, n));
}

/**
 * _sqrt_recursion - returns natural square root of a number
 *
 * @n: number who's natural square must be found
 *
 * Return: returns natural square root of number
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
	{
		return (0);
	}
	return (real_sqr(1, n));
}
