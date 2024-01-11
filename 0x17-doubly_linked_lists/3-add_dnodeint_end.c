#include "lists.h"

/**
 * add_dnodeint_end - add a new node at the end
 * @head: pointer to beginning of list
 * n: new node data
 * Return: address of new node, NULL if failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *now = *head;
	dlistint_t *added = malloc(sizeof(dlistint_t));

	if (added == NULL)
		return (NULL);

	added->n = n;
	added->next = NULL;

	if (*head == NULL)
	{
		added->prev = NULL;
		*head = added;
		return (added);
	}

	while (now->next != NULL)
	{
		now = now->next;
	}

	now->next = added;
	added->prev = now;

	return (added);
}
