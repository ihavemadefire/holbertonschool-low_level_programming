#include "holberton.h"
/**
 * _puts - function that takes a pointer and returns the length of the
 *               string
 * @str: Passed pointer
 *
 *
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar(10);
}
