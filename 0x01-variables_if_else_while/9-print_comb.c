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
		putchar(',');
		putchar('\n');
	}
        return (0);
}

