#include "holberton.h"
/**
 * print_rev - function that takes a pointer and returns the length of the
 *               string
 * @s: Passed pointer
 *
 *
 */
void print_rev(char *s)
{
	int i = 0;
	int j;

	while (*s != '\0')
	{
		i++;
		s++;
	}
	s--;
	for (j = 0; j < i; j++)
	{
		_putchar(*s);
		s--;
	}
	_putchar(10);
}
