#include "holberton.h"
/**
 * puts2 - function that takes a pointer and returns the length of the
 *               string
 * @s: Passed pointer
 *
 *
 */
int string_length(char *s);
void puts2(char *s)
{
	int i;
	int j;

	j = string_length(s);
	for (i = 0;i < j; i+=2)
		_putchar(*(s + i));
	_putchar(10);
}
/**
 * string_length - returns length of string
 *
 * @s: Passed pointer
 *
 * Return: returns length of string
 */
int string_length(char *s)
{
        int c = 0;

        while (*(s + c) != '\0')
                c++;
        return (c);
}
