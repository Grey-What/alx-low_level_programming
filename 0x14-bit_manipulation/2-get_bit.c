#include "main.h"
/**
 * get_bit - gets the value of a bit at a specific index
 *
 * @n: number to get bit at specific location from
 * @index: index of bit to get
 *
 * Return: bit at specified index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit;

	if (index > 64)
		return (-1);

	bit = n >> index;

	return (bit & 1);
}
