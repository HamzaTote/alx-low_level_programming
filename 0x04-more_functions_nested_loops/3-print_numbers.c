#include <stdio.h>
#include "main.h"

/**
 * print_numbers - a function that prints numbers from 0 to 9
 *
 * Description: the function prints numbers from 0 to 9 follwed
 * by a new line
 */

void print_numbers(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}

