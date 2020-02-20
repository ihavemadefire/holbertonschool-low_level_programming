#include "holberton.h"
/**
 *char *string_toupper - returns a concatednated char pointer
 *@s: passed pointer to be compared
 *
 *
 *
 *Return: copied string
 */
int string_length(char *s);
char *string_toupper(char *s)
{
	int i;
	int length = string_length(s);

	for (i = 0; i < length; i++)
	{
		if (s[i] > 96 && s[i] < 123)
			s[i] -= 32;
	}
	return (s);
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
