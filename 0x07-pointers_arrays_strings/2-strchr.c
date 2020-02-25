#include <stdlib.h>
#include "holberton.h"
/**
 **_strchr - locates a character in a string
 *@s: String to be searched
 *@c: Charater to be searched for
 *
 *
 *Return: memory address
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	if (c == '\0')
		return (s);
	s = 0;
	return (s);
}
