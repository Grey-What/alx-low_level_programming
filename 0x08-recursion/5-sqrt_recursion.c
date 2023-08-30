#include "main.h"

int real_square_root(int n, int i);

/**
 * _sqrt_recursion - finds natural squar eroot of a int number
 *
 * @n: value to determine natural square of
 *
 * Return: natural square of n
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (real_square_root(n, 0));
}

/**
 * real_square_root - determines if and what the natural square
 * root of a number
 *
 * @n: number
 * @i: itteration vlue to find natural square
 *
 * Return: actual natural square root , else -1 if not
 */
int real_square_root(int n, int i)
{
	if ((i * i) > n)
		return (-1);
	if ((i * i) == n)
		return (i);
	return (real_square_root(n, i + 1));
}
