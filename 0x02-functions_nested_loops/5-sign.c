#include "holberton.h"
/**
 * print_sign - prints the alphabet.
 *
 * @r: is passed from main function
 *
 * Return: is 0 if zero, 1 if positive, -1 if negative.
 */
int print_sign(int r)
{
	if (r > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (r == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
