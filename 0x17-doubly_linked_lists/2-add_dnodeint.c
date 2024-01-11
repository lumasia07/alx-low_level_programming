#include "lists.h"

/**
 * add_dnodeint - adds node to beginning of list
 * @head: pointer to first node
 * @n: node number
 * Return: address of the new element
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *added = malloc(sizeof(dlistint_t));

	if (added == NULL)
		return (NULL);

	added->n = n;
	added->prev = NULL;
	added->next = *head;

	if (*head != NULL)
		(*head)->prev = added;

	*head = added;

	return (added);
}
