#include "main.h"
/**
 * set_string - this function sets the vlaue of a pointer to a char
 *
 * @s: this is a pointer to a pointer to a string
 * @to: this is a pointer to a string
 *
 * Return: Nothing
 */
void set_string(char **s, char *to)
{
	*s = to;
}
