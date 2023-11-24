#include "main.h"
/**
 * get_bit - return bit at given index
 *
 * @n: number
 * @index: index of bit to be returned
 *
 * Return: value of bit at index, else -1
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int keep;

	if (index > 64)
		return (-1);

	keep = n >> index;

	return (keep & 1);
}
