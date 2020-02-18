#include "holberton.h"
/**
 * rev_string - function that reverses a string
 *
 * @s: Passed pointer
 *
 *
 */
int string_length(char*);
void rev_string(char *s)
{
	{
		int length, c;
		char *start, *end, temp;

	       length = string_length(s);
	       start  = s;
	       end    = s;

	       for (c = 0; c < length - 1; c++)
			end++;

	       for (c = 0; c < length/2; c++)
		{
			temp   = *end;
			*end   = *begin;
			*begin = temp;

			begin++;
			end--;
		}
	}
}

int string_length(char *pointer)
{
	int c = 0;

	while( *(pointer + c) != '\0' )
		c++;
	return c;
}
