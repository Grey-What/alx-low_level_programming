#include "main.h"
/**
 * main - prints the product of two arguments
 *
 * @argc: argument count
 * @argv: array of arguments
 *
 * Return: 0 on success, else 1
 */
int main(int argc, char *argv[])
{
	int anum = 0;
	int bnum = 0;
	int sum = 0;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		anum = atoi(argv[1]);
		bnum = atoi(argv[2]);

		sum = anum * bnum;

		printf("%d\n", sum);

		return (0);
	}
}
