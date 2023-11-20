#include "lists.h"

/**
 * insert_nodeint_at_index - insrsets a new node at a given position
 * @head: first node
 * @idx: index of list where new node should be added
 * @n: data value for new node
 * Return: the address of new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *now;
	unsigned int count;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
	{
		return (NULL);
	}

	new->n = n;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}

	now = *head;
	for (count = 0; count < idx - 1 && now != NULL; count++)
	{
		now = now->next;
	}

	if (now == NULL)
	{
		free(new);
		return (NULL);
	}

	new->next = now->next;
	now->next = new;

	return (new);
}
