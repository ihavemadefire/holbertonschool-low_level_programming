#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * add_node - adds node at the beginning of a linked list
 * @head: double pointer to head
 * @str: string to be added as element in LL
 * Return: number of elements
*/

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	new_node = (list_t *) malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	new_node->str = strdup(str);
	new_node->len = _strlen(str);
	new_node->next = *head;
	*head = new_node;
	return (new_node);
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
