#include "lists.h"

/**
 * get_nodeint_at_index - returns nth node of a list
 * @head: first node
 * @index: index of node
 * Return: nth node of list
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count;
	listint_t *now = head;

	for (count = 0; now != NULL && count < index; count++)
	{
		now = now->next;
	}

	if (count == index && now != NULL)
	{
		return (now);
	}
	else
	{
		return (NULL);
	}
}


