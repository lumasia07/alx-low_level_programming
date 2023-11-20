#include "lists.h"

/**
 * add_nodeint_end - adds node to end of a linked list
 * @head: pointer to first element
 * @n: number of bytes
 * Return: address of new element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *last;
	listint_t *now = *head;

	last = malloc(sizeof(listint_t));

	if (last == NULL)
	{
		return (NULL);
	}

	last->n = n;
	last->next = NULL;

	if (*head == NULL)
	{
		*head = last;
	}
	else
	{
		while (now->next != NULL)
		{
			now = now->next;
		}
		now->next = last;
	}

	return (last);
}
