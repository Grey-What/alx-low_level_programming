#include "main.h"
/**
 * set_bit - set bit at specified index to 1
 *
 * @n: number to set bit at specified index
 * @index: index of bit to set
 *
 * Return: 1 on success, else -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{

	if (index > 64)
		return (-1);

	*n = *n | (1 << index);

	return (1);


}
