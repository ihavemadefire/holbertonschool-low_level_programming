#include "holberton.h"
/**
 * print_numbers - prints the alphabet.
 *
 *
 *
 * Return: Always 0.
 */
void print_numbers(void)
{
	int i = 48;

	while (i < 58)
	{
		_putchar(i);
		i++;
	}
	_putchar(10);
}
