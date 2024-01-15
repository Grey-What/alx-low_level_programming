#include "main.h"
/**
 * _isdigit - this function checks if value is a digit
 *
 * @c: is th evalue to be checked
 *
 * Description: this function checks if a value is a single digit between
 * one and nine
 *
 * Return: this value return a one if it is a digit else a 0
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
		return (0);
}
