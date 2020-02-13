#include "holberton.h"

/**
 * print_line - is a function that prints numbers
 *
 *@n: is passed from main funtion
 */

void print_line(int n)
{
	int i;

	if (n <= 0)
		_putchar(10);
	else
	{
	for (i = 0; i < n ; i++)
		_putchar(95);
	}
		_putchar(10);
}
