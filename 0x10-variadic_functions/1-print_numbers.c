#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - function print numbers in argument separated by s string
 *
 * @separator: string inbetween numbers
 * @n: number of arguments
 *
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int x;

	va_list arg;

	if (separator == NULL)
		return;
	if (n == 0)
		return (0);

	va_start(arg, n);

	for (i = 0; i < n; i++)
	{
		x = va_arg(arg, int);

		if (i == 0)
			printf("%d", x);
		else
			printf("%s%d", separator, x);
	}
	printf("\n");
	va_end(arg);
}
