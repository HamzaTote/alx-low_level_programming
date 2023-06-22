#include <stdio.h>
#include "main.h"

/**
 * print_most_numbers - a function that prints numbers except 2 and 4
 *
 * Description : the function prints numbers except 2 and 4
 */

void print_most_numbers(void)
{
	for (i = '0'; i <= '9'; i++)
	{
		if (i == '2' || i == '4')
		{
			i++;
		}
		_putchar(i);
	}
	_putchar('\n');
}

