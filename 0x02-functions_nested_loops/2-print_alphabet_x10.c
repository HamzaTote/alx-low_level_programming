#include <stdio.h>
/**
 * print_alphabet_x10 - function that prints the alphabet
 *
 * Description: this function prints the alphabet from a to z
 */

void print_alphabet_x10(void)
{
	char letter;
	int i;

	while (i < 10)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
		{
			putchar(letter);
			letter++;
		}
		putchar('\n');
		i++;
	}
}

