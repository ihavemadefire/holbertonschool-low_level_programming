#include <stdlib.h>
#include "holberton.h"
/**
 * *_strpbrk - find first instance of a set of character
 *
 * *_strchr - locates a character in a string
 * @c: Charater to be searched for
 * @s: pointer array to be searched
 *
 * Return:  pointer to array
 */
char *_strchr(char *s, char c);
char *_strpbrk(char *s, char *accept)
{
	for (; *s; s++)
	{
		if (_strchr(accept, *s) != 0)
			return (s);
	}
	return (0);
}
/**
 **_strchr - locates a character in a string
 *@s: String to be searched
 *@c: Charater to be searched for
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
