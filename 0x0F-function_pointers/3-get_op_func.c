#include "3-calc.h"
#include <stdio.h>

/**
 * get_op_func - function to get operator, like atoi for operators
 *
 * @s: char type
 * Return: function to be used
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	i = 0;
	/*iterate through options with strcmp*/
	while (ops[i].op != NULL && strcmp(ops[i].op, s) != 0)
	{
		i++;
	}
	return (ops[i].f);
}
