#include "main.h"
/**
 * swap_int - this function swaps the value of two integers
 *
 * @a: this is the first adress of first integer
 * @b: this is the second adress of the second integer
 *
 * Returns: nothing
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
