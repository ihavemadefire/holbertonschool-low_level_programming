#include "holberton.h"
/**
 *_strstr - searches for a substring within a string
 *@haystack: the string to be searched
 *@needle: the string we are looking for
 *Return: pointer to begining of the string or NULL
 */
char *_strstr(char *haystack, char *needle)
{
	register char *a, *b;

	b = needle;
	if (*b == 0)
	{
		return (haystack);
	}
	for ( ; *haystack != 0; haystack++)
	{
		if (*haystack != *b)
		{
			continue;
		}
		a = haystack;
		while (1)
		{
			if (*b == 0)
			{
				return (haystack);
			}
			if (*a++ != *b++)
			{
				break;
			}
		}
		b = needle;
	}
	return (0);
}
