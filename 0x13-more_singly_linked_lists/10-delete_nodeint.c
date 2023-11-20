#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index of a listint_t
 * @head: first node
 * @index: index of node to be deleted
 * Return: 1 if success, -1 otherwise
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int count = 0;
	listint_t *now, *tmp;

	if (*head == NULL)
	{
		return (-1);
	}

	if (index == 0)
	{
		tmp = *head;
		*head = (*head)->next;
		free(tmp);
		return (1);
	}

	now = *head;

	while (count < index - 1 && now != NULL)
	{
		now = now->next;
		count++;
	}

	if (now == NULL || now->next == NULL)
	{
		return (-1);
	}

	tmp = now->next;
	now->next = tmp->next;
	free(tmp);

	return (1);
}
