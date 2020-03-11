#include "function_pointers.h"

/**
 * print_name - bouces input to correct function
 *
 *@name: name to be printed
 *@f: pointer to function
 */
void print_name(char *name, void (*f)(char *))
{
	if (f == NULL)
		return;
	(f)(name);
}
