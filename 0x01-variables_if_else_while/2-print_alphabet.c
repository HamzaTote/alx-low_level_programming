#include <stdio.h>
#include <stdlib.h>
/**
 * main - a program that prints the alphabet
 * Return: (0) Success
 */
int main(void)
{
	char a[26] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; i < 26; i++)
	{
		putchar(a[i]);
	}
	putchar('\n');
	return (0);
}

