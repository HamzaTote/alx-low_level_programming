#include <stdio.h>

/**
 *_isalpha - a function that check if letter is lower case or not
 *@c: the charavter in ASCII code
 *Description : this is a function that return 1 if lower case and 0 if not
 *Return: (1) Success (0) Fail
 */

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

