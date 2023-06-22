#include <stdio.h>

/**
 * _isupper - a function that checks if uppercase or not
 *
 * @c : char to check
 *
 * Return: (1) Success (0) fail
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

