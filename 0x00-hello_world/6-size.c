#include <stdio.h>
/**
 * main - a program that prints the size of various types on the computer
 * Return: 0 (Success)
 */
int main(void)
{
char a;
int b;
long int c;
long long int d;
float f;
printf("Size of a char: %lu byte(s)", (unsigned long)sizeof(a));
printf("Size of an int: %lu byte(s)", (unsigned long)sizeof(b));
printf("Size of a long int: %lu byte(s)", (unsigned long)sizeof(c));
printf("Size of a long long: %lu byte(s)", (unsigned long)sizeof(d));
printf("Size of a float: %lu byte(s)", (unsigned long)sizeof(f));
return (0);
}
