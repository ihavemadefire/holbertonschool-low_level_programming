#include "holberton.h"
/**
 * _strlen - function that takes a pointer and returns the length of the
 *               string
 * @s: Passed pointer
 *
 * Return: returns length of the passed string
 */
int _strlen(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		i++;
		s++;
	}
	return (i);
}
