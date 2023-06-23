#include <stdio.h>

/**
 * main - a program that prints numbers from 1 to 100 and fizz if
 * multiple of 3 and buzz if multiple of 5
 *
 * Return: (0) Success
 */

int main(void)
{
	int i;

	for (i = 0; i < 100; i++)
	{
		if (i % 3 == 0 && i % 5 != 0)
		{
			printf("Fizz");
		}
		else if (i % 5 == 0 && i % 3 != 0)
		{
			printf("Buzz");
		}
		else if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else
		{
			printf("%d ", i);
		}
	}
	printf("\n");

	return (0);
}

