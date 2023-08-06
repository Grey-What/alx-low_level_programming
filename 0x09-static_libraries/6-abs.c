#include "main.h"
/**
 * _abs - this function computes absolute value of int
 *
 * @n: is the value whose absolute value will be displayed
 *
 * Description: this function computes absolute value of int value by turning
 * negative values positive and leaving positive values as is
 *
 * Return: returns a int value
 */
int _abs(int n)
{
	if (n < 0)
	{
		n = -n;
	}
	return (n);
}
