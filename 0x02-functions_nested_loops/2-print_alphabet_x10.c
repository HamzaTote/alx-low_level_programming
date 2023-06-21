#include <stdio.h>
/**
 * print_alphabet_x10 - function that prints the alphabet
 *
 * Description: this function prints the alphabet from a to z
 */

void print_alphabet_x10(void)
{
	int letter;
	int i;

	for (i = 0; i <= 10; i++)
	{
		for (letter = 97; letter <= 122; letter++)
		{
			putchar(letter);
		}
		putchar('\n');
	}
}

