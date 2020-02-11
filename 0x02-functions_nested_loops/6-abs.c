#include "holberton.h"
/**
 * _abs - returns the absolute value of an integer
 *
 * @r: is passed from main function
 *
 * Return: is 0 if zero, 1 if positive, -1 if negative.
 */
int _abs(int r)
{
	if (r < 0)
	{
		return (-r);
	}
	else
	{
		return (r);
	}
}
