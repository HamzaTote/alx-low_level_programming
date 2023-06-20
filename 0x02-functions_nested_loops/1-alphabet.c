#include <stdio.h>
/**
 * main - a function that prints alphabets
 * Return : (0) Success
 */

void print_alphabet(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		putchar(letter);
		letter++;
	}
	putchar ('\n');
}

