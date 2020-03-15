#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_int -  prints ints
 * @arg: to be printed
 *
 */

void print_int(va_list arg)
{
	printf("%d", va_arg(arg, int));
}

/**
 * print_char -  prints chars
 * @arg: to be printed
 *
 */
void print_char(va_list arg)
{
	printf("%c", va_arg(arg, int));
}

/**
 * print_float -  prints floats
 * @arg: to be printed
 *
 */

void print_float(va_list arg)
{
	printf("%f", va_arg(arg, double));
}
/**
 * print_string -  prints strings
 * @arg: to be printed
 *
 */

void print_string(va_list arg)
{
	char *cp;

	cp = va_arg(arg, char *);
	if (cp == NULL)
		cp = "(nil)";

	printf("%s", cp);
}

/**
 * print_all - prints everything
 * @format: pointer to string to separate values
 *
 */
void print_all(const char * const format, ...)
{
	/*declare vars*/
	va_list arg;
	int i, j;
	char *delim;

	/*creating instance of structure*/
	tp type_dict[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string},
		{NULL, NULL}
		};

	printf("start");
	va_start(arg, format);

	i = 0;
	delim = "";
	while (format && format[i])/*iterate across format*/
	{
		j = 0;
		while (type_dict[j].type != NULL);
		{
			if (format[i] == type_dict[j].type[0])
			{
				printf("%s", delim);
				type_dict[j].p_to_func(va_arg(arg, char *));
				delim = ", ";
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(arg);
}
