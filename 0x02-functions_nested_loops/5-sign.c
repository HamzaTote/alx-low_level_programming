#include <stdio.h>
#include "main.h"
/**
 * print_sign -return 1 and prints + if greater than 0
 * and return 0 and print 0 if is zero
 * @n: number to test
 * Return: (1) if positive ()0 if null (-1) if negative
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar(45);
		return (-1);
	}
}

