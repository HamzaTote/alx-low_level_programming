#include <stdio.h>
/**
 * main - a program that prints single digits
 * Return: (0) Success
 */
int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		putchar(i + 48);
	}
	putchar('\n');
	return (0);
}

