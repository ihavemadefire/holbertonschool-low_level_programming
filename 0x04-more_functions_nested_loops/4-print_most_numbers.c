#include "holberton.h"
/**
 * print_most_numbers - prints the alphabet.
 *
 *
 *
 * Return: Always 0.
 */
void print_most_numbers(void)
{
	int i = 48;

	while (i < 58)
	{
		if (i == 50 || i == 52)
			i++;
		else
		{
		_putchar(i);
		i++;
		}
	}
	_putchar(10);
}
