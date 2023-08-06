#include "main.h"
/**
 * _isupper - this function checks if a letter is upper or lower
 *
 * @c: this is the int vaue of character ascii code
 *
 * Description: this function checks if given char isupper or lower case and
 * returns a value depending result
 *
 * Return: this function returns 0 if lower and 1 if uppercase
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
		return (0);
}
