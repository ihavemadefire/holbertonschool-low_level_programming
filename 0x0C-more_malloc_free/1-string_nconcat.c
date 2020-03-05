#include <stdlib.h>
#include "holberton.h"

/**
 * string_nconcat - Copies string into allocated mem
 *s1: Pointer to string to be appended to
 *s2: Pointer to sting to be appended.
 *@s: String to be measured
 *Return: pointer to copied string
 */
int _strlen(char *s);
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ch;
	int i;
	int k = n;
	int sizeOf1, sizeOf2;

	if (s1 == NULL) /*if s1 is NULL, assign empty*/
		s1 = "";
	if (s2 == NULL) /*if s2 is NULL, assign empty*/
		s2 = "";
	sizeOf1 = _strlen(s1); /* length of s1 */
	sizeOf2 = _strlen(s2); /* length of s2 */

	if (k >= sizeOf2)
	{
		k = sizeOf2;
		ch = malloc(sizeof(char) * (sizeOf1 + sizeOf2 + 1));
	}
	else
	{
		ch = malloc((sizeOf1 + sizeOf2) + 1 * sizeof(char));
	}
	if (ch == NULL)
	{
		return (NULL);
	}
	for (i = 0; s1[i]; i++) /* copy string one to ch pointer*/
		ch[i] = s1[i];
	for (i = 0; i < k; i++)/* copy string to to end of ch */
		ch[sizeOf1 + i] = s2[i];
	ch[sizeOf1 + sizeOf2] = '\0';
	return (ch);
}
/**
 * _strlen - counts lenth of a string
 * @s: string whose length to be measured
 * Return:  length of string
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; s[i]; i++)
	{
		;
	}
	return (i);
}
