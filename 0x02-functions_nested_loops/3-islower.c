#include "holberton.h"
/**
 * islower - prints the alphabet.
 *
 * Return: Always 0.
 */
int _islower(int r)
{

	if ( r > 97 && r < 123)
		return (0);
	else
		return (1);

}
