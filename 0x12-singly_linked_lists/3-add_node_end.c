#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * add_node_end - adds node at the end of a linked list
 * @head: double pointer to head
 * @str: string to be added as element in LL
 * Return: number of elements
*/

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *current;
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new ==  NULL)
		return (NULL);
	new->str  = strdup(str);
	new->len  = _strlen(str);

	if (*head == NULL)
	{
		*head = new;
		new->next = NULL;
		return (*head);
	}
	current = *head;
	while (current->next != NULL)
	{
		current = current->next;
	}
	current->next = new;
	new->next = NULL;
	return (*head);
}
/**
 * _strlen - finds length of string
 * @s: string to be meastured
 * Return: length of string
 */
int _strlen(const char *s)
{
	int i;

	for (i = 0; s[i] ; i++)
		;
	return (i);
}
