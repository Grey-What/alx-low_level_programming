#include "main.h"
/**
 * _strlen - this function returns the length of a string
 *
 * @s: this is the string who's lenght must be determined
 *
 * Return: this function returns the lenght of a string
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
