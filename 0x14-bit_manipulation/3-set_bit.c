#include "main.h"
/**
 * set_bit - set the value of a bit at given index to 1
 *
 * @index: index of bit to edit
 * @n: number that bit needs to be edited of
 *
 * Return: 1 on success, -1 on fail
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int bits;

	if (index > 64)
	{
		return (-1);
	}

	bits = 1 << index;

	*n = *n | bits;

	return (1);
}
