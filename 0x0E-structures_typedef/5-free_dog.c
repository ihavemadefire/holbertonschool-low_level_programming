#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - function to free structure
 * @d: pointer to dog structure
 * Return: Always success
 */

void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	free((*d).name);
	free((*d).owner);
	free(d);
}
