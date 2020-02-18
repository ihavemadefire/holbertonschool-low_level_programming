#include "holberton.h"
/**
 * rev_string - function that reverses a string
 *
 * @s: Passed pointer
 *
 * Return: Reutns lenth of passed pointer
 */
int string_length(char *s);
void rev_string(char *s)
{
	int length, c;
	char *start, *end, temp;

	length = string_length(s);
	start  = s;
	end    = s;

	for (c = 0; c < length - 1; c++)
		end++;

	for (c = 0; c < length / 2; c++)
	{
		temp   = *end;
		*end   = *start;
		*start = temp;
		start++;
		end--;
	}
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
