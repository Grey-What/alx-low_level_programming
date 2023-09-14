#include "variadic_functions.h"
/**
 * print_numbers - function prints it's integer arguments
 *
 * @separator: string to be printed between numbers
 * @n: numbe rof arguments
 *
 * Description: function prints each of it's integer arguments separated by
 * a string
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	va_list nums;

	va_start(nums, n);

	if (n == 0)
		return;

	for (i = 0; i < n; i++)
	{
		if (!separator)
		{
			printf("%d", va_arg(nums, int));
		}
		else if (separator && i == 0)
		{
			printf("%d", va_arg(nums, int));
		}
		else
		{
			printf("%s%d", separator, va_arg(nums, int));
		}
	}
	va_end(nums);

	printf("\n");
}
