#include "holberton.h"
#include <stdio.h>
/**
 * print_array - function that takes a pointer and returns the length of the
 *               string
 * @a: array to be scanned
 * @n: number of places to be printed
 *
 * Return: No return value for puts_half
 */
void print_array(int *a, int n)
{
	int i;

	if (a != NULL)
	{
		printf("%d", *a);
		for (i = 1; i < n; i++)
		{
			printf(", %d", *(a + i));
		}
		printf("\n");
	}
}
