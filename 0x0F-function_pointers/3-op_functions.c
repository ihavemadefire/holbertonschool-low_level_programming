#include <stdio.h>
#include "3-calc.h"

/**
 * op_add - add two ints
 * @a: first operand
 * @b: second operand
 * Return: product
*/
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtract two ints
 * @a: first operand
 * @b: second operand
 * Return: product
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiply two ints
 * @a: first operand
 * @b: second operand
 * Return: product
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divide two ints
 * @a: first operand
 * @b: second operand
 * Return: product
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - mod two ints
 * @a: first operand
 * @b: second operand
 * Return: product
 */
int op_mod(int a, int b)
{
	return (a % b);
}
