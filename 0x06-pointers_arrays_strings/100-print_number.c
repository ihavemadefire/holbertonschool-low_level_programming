#include "holberton.h"

/**
 *print_number - This program prints the highest prime factor
 *
 *@n: passed number to be printed
*/
void print_number(int n)
{
	int k, rem, len, i, pow;
	int mir = n;
	int pc = 0;
	int j = n;

	if (n == 0)
		_putchar('0');
	if (n < 0)
	{
	_putchar('-');
	mir = -n;
	j = -n;
	}
	len = 0;
	while (j != 0)
	{
		j /= 10;
		len++;
	}
	for (pow = 1; pc < (len - 1); pc++)
	{
		pow *= 10;
	}
	for (i = 0; i < len; i++)
	{
		k = mir;
		_putchar((mir / pow) + '0');
		rem = k % pow;
		pow /= 10;
		mir = rem;
	}
}
