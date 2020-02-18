#include "holberton.h"
/**
 * *_strcpy - function that reverses a string
 *
 * @s: Passed pointer
 * dest: Pointer to destination
 * src: source from which
 *
 * Return: Returns lenth of passed pointer
 */
int string_length(char *s);
char *_strcpy(char *dest, char *src)
{
	int i, length;

	length = string_length(src);

	for (i = 0; i < length; i++)
	{
		*(dest + i) = *(src + i);
	}
	return (dest);
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
	return (c + 1);
}
