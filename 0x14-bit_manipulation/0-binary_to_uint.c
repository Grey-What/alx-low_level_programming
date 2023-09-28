#include "main.h"
/**
 * _pow_recursion - function determines a value to the power of another value
 *
 * @x: base number
 * @y: power
 *
 * Return: x to the power of y
 */
int _pow_recursion(int x, int y)
{
	if (y == 0)
		return (1);

	return (x * _pow_recursion(x, y - 1));
}
/**
 * binary_to_uint - function converts a binary number to an int
 *
 * @b: a string containing the binary number
 *
 * Return: the dec number or 0 on failure
 */
unsigned int binary_to_uint(const char *b)
{
	int i = 0, j;
	int len = 0;
	unsigned int dec_num = 0;
	unsigned int digit;

	if (b == NULL)
		return (0);
/*determine length of binary string and check if it binary*/
	while (b[len] != '\0')
	{
		if (b[len] != '0' && b[len] != '1')
			return (0);
		len++;
	}
	j = 0;
/*extract digit from string in reverse*/
	for (i = len - 1; i >= 0; i--)
	{
		digit = b[i] - '0';
/*determine digit to the power of relevant position and add to dec number*/
		dec_num += digit * _pow_recursion(2, j);
		j++;
	}

	return (dec_num);
}
