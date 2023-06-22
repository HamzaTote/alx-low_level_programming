#include <stdio.h>

/**
 * _isdigit - a function that checks if digit or not
 *
 * @c: integer to check
 *
 * Return: (1) success (0) fail
 */

int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

