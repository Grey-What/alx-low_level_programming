#include "main.h"
/**
 * _strspn - this function determines lenght of intial substring of main string
 * that consists of characters contained in second string
 *
 * @s: main string to be searched
 * @accept: second string that contains characters to be searched for
 *
 * Return: number of bytes in intial string s consisting only of bytes in
 * accept
 */
unsigned int _strspn(char  *s, char *accept)
{
	int i = 0;
	int j;
	int onematch;
	unsigned int counter = 0;

	while (s[i] != '\0')
	{
		j = 0;
		onematch = 0;

		while (accept[j] != '\0')
		{
			if (s[i] ==  accept[j])
			{
				counter++;
				onematch = 1;
			}
			j++;
		}
		if (onematch == 0)
		{
			return (counter);
		}
		i++;
	}
	return (0);
}
