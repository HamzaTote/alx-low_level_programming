#include <stdio.h>
#include <stdlib.h>
/**
 * main - a program that prints the alphabet
 * Return: (0) Success
 */
int main(void)
{
	int n = 97;

	while (n <= 122)
	{
		putchar(n);
		if (n == 113 || n == 101)
		{
			n++;
		}
		n++;
	}
	putchar('\n');
	return (0);
}

