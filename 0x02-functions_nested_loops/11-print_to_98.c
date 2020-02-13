#include <stdio.h>
#include "holberton.h"
/**
 * print_to_98 - returns the last digit
 *@a: starting point to count to 98
 *
 *
 * Return: is 0 if zero, 1 if positive, -1 if negative.
 */
void print_to_98(int a)
{
	int i;

	if (a > 98)
	{
		for (i = a; i >= 98 ; i--)
			printf("%d, ", i);
	}
	else
	{
		for (i = a; i <= 98; i++)
			printf("%d, ", i);
	}
}
