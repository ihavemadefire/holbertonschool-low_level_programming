#include "holberton.h"
/**
 * times_table - returns the last digit
 *
 *
 *
 * Return: is 0 if zero, 1 if positive, -1 if negative.
 */
void times_table(void)
{
	int i;
	int j;
	int k;

	for (i = 0; i <= 9; i++)
	{
		_putchar('0');
		for (j = 1; j <= 9; j++)
		{
			_putchar(',');
			_putchar(' ');
			k = j * i;
			if ((k / 10) == 0)
			{
				_putchar(' ');
				_putchar(k + '0');
			}
			else
			{
				_putchar((k / 10) + '0');
				_putchar((k % 10) + '0');
			}
			if (j == 9)
				_putchar('\n');
		}
	}
}
