#include <stdio.h>
#include <stdlib.h>
/**
 * main - a program that prints the alphabet
 * Return: (0) Success
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(i + 48);
		if (i == 9)
		{
			putchar(' ');
			return (0);
		}
		putchar(',');
		putchar(' ');
	}
	return (0);
}

