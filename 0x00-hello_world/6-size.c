#include <stdio.h>
/**
 * main - this function print the size of types on my computer
 *
 * Description: this function prints the size of different data types on my
 * computer, it uses the printf function and % temp variables
 *
 * Return: the return value is zero
 */
int main(void)
{
	printf("Size of a char: %u byte(s)\n", sizeof(char));
	printf("Size of an int: %u byte(s)\n", sizeof(int));
	printf("Size of a long int: %u byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %u byte(s)\n", sizeof(long long int));
	printf("Size of a float: %u byte(s)\n", sizeof(float));
	return (0);
}
