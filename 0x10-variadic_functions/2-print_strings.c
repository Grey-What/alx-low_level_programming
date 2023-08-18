#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_strings - function prints strings separated by a string
 *
 * @separator: the separator string
 * @n: number of arguments
 *
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *s;

	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		s = va_arg(args, char *);

		if (s == NULL)
			s = "(nil)";

		if (separator == NULL)
			printf("%s", s);

		else if (i == 0 && separator)
			printf("%s", s);

		else
			printf("%s%s", separator, s);
	}
	printf("\n");
	va_end(args);
}
