#include "holberton.h"
#include <stdio.h>
/**
 * cap_string - returns a concatednated char pointer
 *@s: passed pointer to be compared
 *
 *
 *
 *Return: copied string
 */

char *cap_string(char *s)
{
	int i, j;
	char not[] = {' ', '\t', '\n', ',', ';', '.',
		      '!', '?', '"', '(', ')', '{', '{'};

	if (*s >= 97 && *s <= 122)
		*s -= 32;
	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j <= 12; j++)
		{
			if (not[j] == s[i])
			{
				if (s[i + 1] >= 'a' && s[i + 1] <= 'z')
				{
					s[i + 1] -= 32;
				}
			}
		}
	}
	return (s);
}
