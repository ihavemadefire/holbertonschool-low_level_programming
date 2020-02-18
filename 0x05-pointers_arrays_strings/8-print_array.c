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

		for (i = 0 ; i < n; i++)
		{
			if (i == 0)
				printf("%d", *a);
			else
				printf(", %d", *(a + i));
		}
		printf("\n");
}
