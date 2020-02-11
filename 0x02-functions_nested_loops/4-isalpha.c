#include "holberton.h"
/**
 * _isalpha - prints the alphabet.
 *
 * @r: is passed from main function
 *
 * Return: Always 0.
 */
int _isalpha(int r)
{
	if ((r > 97 && r < 123) || (r > 64 && r < 91))
		return (1);
	else
		return (0);
}
