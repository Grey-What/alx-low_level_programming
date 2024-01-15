# include "main.h"
/**
 * _islower - determines if a char value is lower or upper and returns
 * value based on it
 *
 * @c: this value is the ascii number of a letter
 *
 * Description: this function checks if a character is lower or upper case
 * and returns 1 if it is lower and returns 0 otherwise
 *
 * Return: returns 1 if a char is lowercase
 */
int _islower(int c)
{
	if (c >= 97)
	{
		return (1);
	}
	else
		return (0);
}
