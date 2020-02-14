#include "holberton.h"

/**
 * print_triangle - is a function that prints numbers
 *
 *@n: is passed from main funtion
 */

void print_triangle(int n)
{
	int r;
	int s;
	int t;

	if (n <= 0)
		_putchar(10);
	else
	{
		for (r = 0; r < n ; r++)
		{
			for (s = n; s > r; s--)
			{
				_putchar(32);
			}
			for (t = 0; t <= r; t++)
			{
				_putchar(35);
			}
			_putchar(10);
		}
	}
}
