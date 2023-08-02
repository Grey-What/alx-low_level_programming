#include "main.h"
/**
 * _pow_recursion - function prints result of a number to power with recursion
 *
 * @x: base number
 * @y: power
 *
 * Return: -1 if y is < 0; or result of x to power of y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
