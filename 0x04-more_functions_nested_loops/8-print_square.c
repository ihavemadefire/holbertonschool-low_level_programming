#include "holberton.h"

/**
 * print_square - is a function that prints numbers
 *
 *@n: is passed from main funtion
 */

void print_square(int n)
{
	int r;
	int s;

	if (n <= 0)
		_putchar(10);
	else
	{
		for (r = 0; r < n ; r++)
		{
			for (s = 0; s < n; s++)
			{
				_putchar(35);
			}
			_putchar(10);
		}
	}
}
