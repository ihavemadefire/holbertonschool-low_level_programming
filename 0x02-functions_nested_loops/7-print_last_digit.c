#include "holberton.h"
/**
 * print_last_digit - returns the last digit
 *
 * @r: is passed from main function
 *
 * Return: is 0 if zero, 1 if positive, -1 if negative.
 */
int print_last_digit(int r)
{
	int i;
	int j;

	if (r < 0)
	{
		i = -r;
		j = (i % 10);
		_putchar(j+'0');
		return (j);
	}
	else{
		j = (r % 10);
		_putchar(j+'0');
		return (j);
	}
}
