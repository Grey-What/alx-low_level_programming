#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_all - function prints anything
 *
 * @format: list of argument passed
 *
 * Return: void
 */
void print_all(const char * const format, ...)
{
	int i = 0;
	char *s;
	char *div = "";

	va_list args;

	va_start(args, format);

	if (format)
	{
		while (format[i] != '\0')
		{
			switch (format[i])
			{
			case 'c':
				printf("%s%c", div, va_arg(args, int));
				break;

			case 'i':
				printf("%s%i", div, va_arg(args, int));
				break;

			case 'f':
				printf("%s%f", div, va_arg(args, double));
				break;

			case 's':
				s = va_arg(args, char *);
				if (s == NULL)
					s = "(nil)";
				printf("%s%s", div, s);
				break;

			default:
				i++;
				continue;
			}
			div = ", ";
			i++;
		}
	}

	printf("\n");
	va_end(args);
}
