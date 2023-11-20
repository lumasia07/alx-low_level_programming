#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a list
 * @head: pointer to first node
 * @n: number of nodes
 * Return: address of new element
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *start;

	start = malloc(sizeof(listint_t));

	if (start == NULL)
	{
		return (NULL);
	}

	start->n = n;
	start->next = *head;
	*head = start;

	return (start);
}
