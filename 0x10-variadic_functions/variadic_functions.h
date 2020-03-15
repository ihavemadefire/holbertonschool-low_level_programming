#ifndef HEADER_H
#define HEADER_H

#include <stdarg.h>

int _putchar(char c);
/**
 * struct pointer - dictionary of types
 * @type: pointer to value to be tested
 * @p_to_func: pointer to function
 */
typedef struct pointer
{
	char *type;
	void (*p_to_func)();
} tp;


int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
void print_int(va_list arg);
void print_char(va_list arg);
void print_float(va_list arg);
void print_string(va_list arg);
#endif
