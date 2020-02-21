#include "holberton.h"
#include <stdio.h>
/**
 * cap_string - returns a concatednated char pointer
 *@s: passed pointer to be compared
 *
 *
 *
 *Return: copied string
 */

char *leet(char *s)
{
	int i, j;
	char l[10] = "AEOTLaeotl";
	char k[10] = "4307143071";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j <= 10; j++)
		{
			if (s[i] == l[j])
			{
				*(s + i) = *(k + j);
			}
		}
	}
	return (s);
}
