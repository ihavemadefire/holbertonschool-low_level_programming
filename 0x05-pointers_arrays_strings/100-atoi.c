#include "holberton.h"

/**
 * _atoi -   converts an ascii string into an integer
 *
 * @x: a passed string pointer
 *
 * Return: Return integer
 */
int isNumericChar(char x);
int _atoi(char *s)
{
	int result = 0;
	int sign = 1;
	int i = 0;

	if (*s == '\0')
		return (0);

	while (isNumericChar(*s) == 0)
		s++;
	if (*(s + 0) == '-')
	{
		sign = -1;
		i++;
	}
	for (; isNumericChar(*(s + i)) != 0; ++i)
		result = (result * 10) + *(s + i) - '0';

	return (result * sign);
}
/**
 * isNumericChar -   converts an ascii string into an integer
 *
 * @x: a passed variable to check if the next char is numeric
 *
 * Return: Return integer
 */
int isNumericChar(char x)
{
	if (x >= '0' && x <= '9')
		return (1);
	else
		return (0);
}
