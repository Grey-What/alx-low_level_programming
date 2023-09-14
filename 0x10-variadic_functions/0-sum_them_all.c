#include "variadic_functions.h"
/**
 * sum_them_all - function returns the sum of all it's parameters
 *
 * @n: number of argumnets
 *
 * Return: sum of all arguments
 */
int sum_them_all(const unsigned int n, ...)
{
	int total = 0;
	int temp;
	unsigned int i;
	va_list args;

	if (n == 0)
		return (0);

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		temp = va_arg(args, int);
		total += temp;
	}

	return (total);
}
