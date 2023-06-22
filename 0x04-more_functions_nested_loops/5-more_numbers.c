#include "main.h"
#include <stdio.h>

/**
 * more_numbers - a function that prints 10 times numbers from 0 to 14
 *
 * Description : this function prints numbers from 0 to 14 10 times
 */

void more_numbers(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = '0'; j <= '14'; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
	}
}

