#include "main.h"
/**
 * binary_to_uint - function converts binary to unsigned int
 *
 * @b: binary to be converted
 *
 * Return: unint number or 0 if binary number is not valid
 */
unsigned int binary_to_uint(const char *b)
{
	int i = 0;
	size_t num = 0;

	if (b == NULL)
		return (0);

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
	}

	for (i = 0; b[i] != '\0'; i++)
	{
		num = num << 1;
		if (b[i] == '1')
		{
			num += 1;
		}
	}
	return (num);
}
