#include "3-calc.h"
/**
 * main - start of program that performs different operations two ints
 *
 * @argc: number of arguments
 * @argv: array of string arguments
 *
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	int val1, val2, result;
	char operator;
	int (*func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	val1 = atoi(argv[1]);
	val2 = atoi(argv[3]);

	func = get_op_func(argv[2]);

	if (func == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	operator = *argv[2];

	if ((operator == '/' || operator == '%') && val2 == 0)
	{
		printf("Error\n");
		exit(100);
	}

	result = func(val1, val2);

	printf("%d\n", result);

	return (0);
}
