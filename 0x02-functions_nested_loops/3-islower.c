#include <stdio.h>

/**
 *_islower - a function that check if letter is lower case or not
 *Description : this is a function that return 1 if lower case and 0 if not
 *Return: (1) Success (0) Fail
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

