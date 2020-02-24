#include "holberton.h"
#include <stdio.h>
/**
 * rot13 - returns a concatednated char pointer
 *@s: passed pointer to be compared
 *
 *
 *
 *Return: copied string
 */

char *rot13(char *s)
{
	int i, j;
	char rl[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char sl[52] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j <= 52; j++)
		{
			if (s[i] == rl[j])
			{
			s[i] = sl[j];
			break;
			}
		}
	}
	return (s);
}
