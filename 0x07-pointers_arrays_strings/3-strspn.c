#include "holberton.h"
/**
 **_strspn - locates a character in a string
  *@s: String to be searched
 *@accept: Char set to be matched against
 *
 *
 *Return: number of bytes in segment that match accept
 */
unsigned int _strspn(char *s, char *accept)
{
	int i;
	int j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				break;
			}
		}
		if (s[i] != accept[j])
			break;
	}
	return (i);
}
