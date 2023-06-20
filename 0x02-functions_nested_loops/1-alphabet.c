#include <stdio.h>
/**
 * print_alphabet - function that prints the alphabet
 *
 * Description: this function prints the alphabet from a to z
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

