#include "holberton.h"
/**
 *_strlen_recursion - Returns using recursion
 *@s: pointer to a sting to be measured
 * Return: length of the passed string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen_recursion(s + 1));
	}
}
