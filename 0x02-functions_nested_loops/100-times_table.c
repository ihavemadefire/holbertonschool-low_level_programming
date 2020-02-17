#include "holberton.h"
/**
 * print_times_table - returns the last digit
 *
 *@n: passed var
 *
 * Return: is 0 if zero, 1 if positive, -1 if negative.
 */
void print_times_table(int n)
{
	int i;
	int j;
	int k;

	if (n < 0 || n > 15)
	{
	}
	else
	{
		for (i = 0; i <= n; i++)
		{
			_putchar('0');
			for (j = 1; j <= n; j++)
			{
				_putchar(',');
				_putchar(' ');
				k = j * i;
				if ((k / 10) == 0)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar(k + '0');
				}
				else if ((k / 100) == 00)
				{
					_putchar(' ');
					_putchar((k / 10) + '0');
					_putchar((k % 10) + '0');
				}
				else
				{
					_putchar((k / 100) + '0');
					_putchar(((k % 100) / 10) + '0');
					_putchar((k % 10) + '0');
				}
			}
				_putchar('\n');
		}
	}
}
