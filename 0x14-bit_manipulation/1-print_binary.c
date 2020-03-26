#include "holberton.h"

/**
 * print_binary - converts base ten into binary
 * @n: base 10 number to be printed
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);

	_putchar((n & 1) + '0');
}
