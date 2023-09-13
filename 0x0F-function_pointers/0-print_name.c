#include <stdlib.h>
#include "function_pointers.h"
/**
 * print_name - function prints name with callback function
 *
 * @name: name to be printed
 * @f: pointer to function used as callback function.
 *
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
		return;

	f(name);
}
