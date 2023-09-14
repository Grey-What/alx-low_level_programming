#include "variadic_functions.h"
/**
 * print_strings - function prints stirng separated by a string
 *
 * @separator: seperator string
 * @n: number of strings
 *
 * Return: nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list str;
	char *s;

	if (n == 0)
		return;

	va_start(str, n);

	for (i = 0; i < n; i++)
	{
		s = va_arg(str, char *);

		if (s == NULL)
		{
			s = "(nil)";
		}
		if (!separator)
			printf("%s", va_arg(str, char *));

		else if (separator && i == 0)
			printf("%s", s);

		else
			printf("%s%s", separator, s);
	}
	printf("\n");
	va_end(str);
}
