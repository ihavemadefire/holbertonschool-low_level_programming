#include "holberton.h"
/**
 *_strncpy - returns a concatednated char pointer
 *@dest: destination to be concatenated to
 *@src: to be cated
 *@n: max number of bytes from src
 *
 *Return: copied string
 */

int _strcmp(char *s1, char *s2)
{
	int i;
	int j;
	int dif;

	for (i = 0; *(s1 + i) != '\0'; i++)
		;
	for (j = 0; j < i; j++)
	{
		if ((*(s1 + j) - *(s2 + j)) != 0)
		{
			dif = (s1[j] - s2[j]);
			break;
		}
		else
			dif = (0);
	}
	return (dif);
}
