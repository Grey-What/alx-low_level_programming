#include "main.h"
/**
 * _isalpha - checks if char is alphabetic and returns 1 if true
 *
 * @c: this is the ascii value of charater
 *
 * Description: this function checks if the ascii value assosciates to an
 * alphabetic character and returns 1 if true, else it returns 0
 *
 * Return: this function returns 1 if alpha else returns 0
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	else
		return (0);
}
