#include "holberton.h"
/**
 * jack_bauer - returns the last digit
 *
 *
 *
 * Return: is 0 if zero, 1 if positive, -1 if negative.
 */
void jack_bauer(void)
{
	int i;
	int j;

	for (i = 0; i < 24; i++)
	{
		for (j = 0; j <= 59 ; j++)
		{
			_putchar((i / 10) + '0');
			_putchar((i % 10) + '0');
			_putchar(':');
			_putchar((j / 10) + '0');
			_putchar((j % 10) + '0');
			_putchar(10);
		}
	}
}
