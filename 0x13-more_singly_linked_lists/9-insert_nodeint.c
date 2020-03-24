#include <stdio.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - gets and returns value at a given index
 * @head: head of ll to be amended
 * @idx: index of value to be returned
 * @n: new node content
 * Return: pointer to node at index
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *tmp = NULL;
	listint_t *new = NULL;
	unsigned int i = 0;

	if (head == NULL)/*Check for NULL input to function*/
		return (NULL);
	new = malloc(sizeof(listint_t));/*malloc new*/
	if (new == NULL)/*validcate the malloc*/
		return (NULL);
	new->n = n;
	new->next = NULL;
	tmp = *head;
	if (tmp == NULL)/*if the list is empty, make it THE list*/
	{
		*head = new;
		new->next = NULL;
		return (new);
	}
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	while (i != (idx - 1))
	{
		tmp = tmp->next;
		i++;
		if (tmp == NULL)
		{
			free(new);
			return (NULL);
		}
	}
	new->next = tmp->next;
	tmp->next = new;
	return (new);
}
