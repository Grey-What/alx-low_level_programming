#include "variadic_functions.h"
/**
 * print_all - function prints anything
 *
 *  @format: list of types of arguments passed to the format
 *
 * Return: nothing
 */
void print_all(const char * const format, ...)
{
	int i = 0;
	char *null_s;
	char *separator  = "";
	va_list args;

	va_start(args, format);

	while (format && format[i])
	{
		switch (format[i])
		{
		case 'c':
			printf("%s%c", separator, va_arg(args, int));
			break;
		case 'i':
			printf("%s%d", separator, va_arg(args, int));
			break;
		case 'f':
			printf("%s%f", separator, va_arg(args, double));
			break;
		case 's':
			null_s = va_arg(args, char *);
			if (!null_s)
				null_s = "(nil)";

			printf("%s%s", separator, null_s);
			break;
		default:
			i++;
			continue;
		}
		separator = ", ";
		i++;
	}
	printf("\n");
	va_end(args);
}
