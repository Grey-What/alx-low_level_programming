#include "main.h"
/**
 * clear_bit - sets the value of a bit to 0 at a given index
 *
 * @n: pointer to number to have digit changed
 * @index: index of bit to change
 *
 * Return: 1 on success, -1 on fail
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int bits;

	if (index > 64)
		return (-1);

	bits = ~(1 << index);

	*n = *n & bits;

	return (1);
}
