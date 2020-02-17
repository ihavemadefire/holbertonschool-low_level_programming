#include <unistd.h>
#include "holberton.h"
/**
 * swap_int - function that takes a pointer to an int as
 *      parameter and updates the value it points to to 98
 * @n: Passed pointer
 *
 */
void swap_int(int *a, int *b)
{
	int i = *a;
	int j = *b;
	*a = j;
        *b = i;
}
