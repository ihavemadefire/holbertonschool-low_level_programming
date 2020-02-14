#include "holberton.h"

/**
 * print_diagonal - is a function that prints numbers
 *
 *@n: is passed from main funtion
 */

void print_diagonal(int n)
{
	int r;
	int s;

	if (n <= 0)
		_putchar(10);
	else
	{
		for (r = 0; r < n ; r++)
		{
			for (s = 0; s < r; s++)
			{
				_putchar(32);
			}
			_putchar(92);
			_putchar(10);
		}
	}
}
