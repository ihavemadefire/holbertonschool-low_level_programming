#include "holberton.h"

/**
 * letter_var - resolve palidrome
 * @s: pointer to string to be counted
 * @len: int type
 * Return: return palidrome
 */

int letter_var(char *s, int len)
{
	if (len <= 0)
		return (1);
	if (s[0] == s[len - 1])
	{
		return (letter_var(s + 1, len - 2));
	}
	else
		return (0);
}
/**
 * _strlen - length of string
 * @s: passed pointer toa string to be measured
 * Return: returns length
 */

int _strlen(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen(s + 1));
}
/**
 * is_palindrome - check if palidrome
 * @s: pointer to string to be counted
 * Return: return value
 */

int is_palindrome(char *s)
{
	int len = _strlen(s);

	if (len <= 1)
		return (1);
	else
		return (letter_var(s, len));
}
