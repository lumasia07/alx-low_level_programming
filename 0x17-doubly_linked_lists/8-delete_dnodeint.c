#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes node at index in list
 * @head: double pointer to list
 * @index: index node to be deleted
 * Return: 1 on success, -1 on failure
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *now = *head;
	unsigned int x = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		(*head) = (*head)->next;
		if (*head)
			(*head)->prev = NULL;
		free(now);
		return (1);
	}

	while (x < index)
	{
		if (now == NULL)
			return (-1);
		now = now->next;
		++x;
	}

	now->prev->next = now->next;

	if (now->next)
		now->next->prev = now->prev;
	free(now);

	return (1);
}
