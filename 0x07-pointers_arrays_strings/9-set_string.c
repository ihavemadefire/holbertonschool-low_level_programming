#include "holberton.h"

/**
 * set_string - use a pointer to derefrence a string
 * @s: pointer to pointer
 * @to: pointer to string
 *
 */

void set_string(char **s, char *to)
{
	*s = to;
}
