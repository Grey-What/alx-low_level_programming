#include "main.h"
/**
 * clear_bit - set value of bit at given index to 0
 *
 * @n: number
 * @index: index of bit to be unset
 *
 * Return: 1 on success or -1 on fail
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 64)
		return (-1);

	*n = *n & ~(1 << index);

	return (1);
}
