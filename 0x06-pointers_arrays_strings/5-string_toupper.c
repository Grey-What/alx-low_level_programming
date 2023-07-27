#include "main.h"
/**
 * string_toupper - this function reverses a string
 *
 * @str: this is the pointer to the string
 *
 * Return: return the reverse string
 */
char *string_toupper(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}
