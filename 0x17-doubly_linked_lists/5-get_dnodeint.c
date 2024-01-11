#include "lists.h"

/**
 * get_dnodeint_at_index - returns nth node of a list
 * @head: pointer to first node of list
 * @index: position of node
 * Return: nth node of list
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *now = head;

	while (now != NULL && index > 0)
	{
		now = now->next;
		index--;
	}

	return (now);
}
