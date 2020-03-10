#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
 * _strlen - return length of a string
 *
 * @s: pointer to string to be measured
 * Return:  length of string
 */

int _strlen(char *s)
{
	int i;

	for (i = 0; s[i]; i++)
		;
	return (i);
}
/**
 * _strcpy - function to copy string
 *@dest: pointer to destination
 *@src: pointer to string to be copied
 * Return: return pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i]; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}
/**
 * *new_dog - function to create new dog struct
 * @name: name
 * @age: age
 * @owner: owner
 * Return: Always 0
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *nd;

	if (name == NULL || owner == NULL)
		return (NULL);

	nd = malloc(sizeof(struct dog));
	if (nd == NULL)
		return (NULL);

	if (name == NULL)
	{
		free(nd);
		return (NULL);
	}
	(*nd).name = malloc(sizeof(char) * (_strlen(name) + 1));
	if ((*nd).name == NULL)
		return (NULL);
	_strcpy((*nd).name, name);

	nd->age = age;

	if (owner == NULL)
	{
		free((*nd).owner);
		free(nd);
		return (NULL);
	}
	(*nd).owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if ((*nd).owner == NULL)
		return (NULL);
	_strcpy((*nd).owner, owner);

	return (nd);
}
