#include <stdlib.h>
#include <time.h>
/* more headers goes there */
/*
 * main - a program that test a number if positive or negative
 * Return: (0) Success
 */
/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if(n>0)
	{
	printf("is positive");
	}
	else if(n=0)
	{
	printf("is zero");
	}
	else
	{
	printf("is negative");
	}
	return (0);
}
