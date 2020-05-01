#include "lists.h"
/**
 * add_dnodeint - Adds new node at beginning of LL
 * @head: double * to head of LL
 * @n: number that is the content of the new node
 * Return: returns the address of the new node
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = (dlistint_t *)malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->prev = NULL;
	new->next = *head;
	new->n = n;
	*head = new;
	return (new);
}
