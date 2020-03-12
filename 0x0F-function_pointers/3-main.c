#include <stdio.h>
#include "3-calc.h"
#include <stdlib.h>

/**
 * main - Entry point of program
 * @argc: number of command line arguments
 * @argv: An array of passed args
 * Return: Always zero
 */

int main(int argc, char *argv[])
{
	/*definitions*/
	int (*operator)(int, int); /*function pointer */
	int num1, num2;/*passed operands*/
	/*validations and edge cases*/
	if (argc != 4)/*validate only two operands and operator*/
	{
		printf("Error\n");
		exit(98);
	}
	operator = get_op_func(argv[2]);/*use operator to find func*/
	num1 = atoi(argv[1]);/*convert char to int*/
	num2 = atoi(argv[3]);/*convert char to int*/

	if (operator == NULL) /*validate operator isn't null*/
	{
		printf("Error\n");
		exit(99);
	}

	if ((argv[2][0] == '%' || argv[2][0] == '/') && atoi(argv[3]) == 0)
	{/*validate for undefined operations*/
		printf("Error\n");
		exit(100);
	}
	/*execute main action*/
	printf("%d\n", operator(num1, num2)); /*call func and print*/

	return (0);
}
