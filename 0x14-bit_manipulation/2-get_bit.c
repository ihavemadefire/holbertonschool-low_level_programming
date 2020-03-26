#include "holberton.h"

/**
 * get_bit - returns value at index
 * @n: number to be sliced
 * @index: index to be returned
 * Return: value at that index
 **/
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int x;

	x = (n >> index);
	return (x & 1);
}
