#include "holberton.h"
/**
 * _isdigit - prints the alphabet.
 *
 * @r: is passed from main function
 *
 * Return: Always 0.
 */
int _isdigit(int r)
{
	if (r >= 48 && r <= 57)
		return (1);
	else
		return (0);
}
