#include <stdio.h>

/**
 * _abs : return the absolute number of an integer entered
 *
 * Description: the function returns the absolute value of an integer
 * @n : number to test
 * Return: (n) if positive and (-n) if negative
 */

int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	else
	{
		return (n * -1);
	}
}

