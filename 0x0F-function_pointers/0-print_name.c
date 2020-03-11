#include "function_pointers.h"

/**
 * print_name - bouces input to correct function
 *
 *
 *
 */
void print_name(char *name, void (*f)(char *))
{
	(f)(name);
}
