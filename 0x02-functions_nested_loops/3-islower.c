#include "holberton.h"
/**
 * _islower - prints the alphabet.
 *
 * @r: is passed from main function
 *
 * Return: Always 0.
 */
int _islower(int r)
{
	if (r > 97 && r < 123)
		return (1);
	else
		return (0);
}
