#include "holberton.h"
/**
 * _isupper - prints the alphabet.
 *
 * @r: is passed from main function
 *
 * Return: Always 0.
 */
int _isupper(int r)
{
	if (r > 64 && r < 91)
		return (1);
	else
		return (0);
}
