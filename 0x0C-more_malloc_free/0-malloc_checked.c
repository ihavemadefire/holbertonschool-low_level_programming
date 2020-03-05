#include <stdlib.h>
#include "holberton.h"

/**
 * malloc_checked - Allocates a
 *@b: pointer to be alloced for
 *
 *Return: pointer to allocated array
 */
void *malloc_checked(unsigned int b)
{
	unsigned int *x;

	x = malloc(b);
	if (x == NULL)
		exit(98);
	return (x);
}
