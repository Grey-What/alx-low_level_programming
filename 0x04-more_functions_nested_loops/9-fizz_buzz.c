#include <stdio.h>
/**
 * main - this function prints numbers 0 to 100
 *
 * Description: this function prints 0 to 100 but replace all multiples of
 * 3 with Fizz, multiples of 5 with Buzz, and multiples of 3 and 5 with
 * FizzBuzz
 *
 * Return: zero
 */

int main(void)
{
	int i = 1;

	while (i <= 100)
	{
		int fizz = i % 3;
		int buzz = i % 5;

		if (fizz == 0 && buzz == 0)
		{
			char fizzbuzz[] = "FizzBuzz";

			printf("%s ", fizzbuzz);
		}
		else if (fizz == 0)
		{
			char fizzstr[] = "Fizz";

			printf("%s ", fizzstr);
		}
		else if (buzz == 0)
		{
			char buzzstr[] = "Buzz";

			printf("%s ", buzzstr);
		}
		else
		{
			printf("%d ", i);
		}
		i++;
	}
	putchar('\n');
	return (0);
}
