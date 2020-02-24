#include "holberton.h"
/**
 **_strchr - locates a character in a string
 *@s: String to be searched
 *@c Charater to be searched for
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
	if (*s == '\0')
		return (s);
	return (s);
}
