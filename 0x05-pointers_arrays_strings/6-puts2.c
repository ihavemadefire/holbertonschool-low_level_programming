#include "holberton.h"
/**
 * puts2 - function that takes a pointer and returns the length of the
 *               string
 * @s: Passed pointer
 *
 *
 */
void puts2(char *s)
{
	while (*s != '\0')
	{
		_putchar(*s);
		s++;
		s++;
	}
	_putchar(10);
}
