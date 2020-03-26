#include "holberton.h"

/**
 * clear_bit -sets bit at index
 * @n: int to be manipulated
 * @index: index at which to manipulate
 * Return: 1 on success; -1 if failure.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(n) * 8)
		return (-1);

	*n =  *n & ~(1 << index);
	return (1);
}
