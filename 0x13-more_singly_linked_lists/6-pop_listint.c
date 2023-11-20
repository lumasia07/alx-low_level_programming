#include "lists.h"

/**
 * pop_listint - deletes the head node and returns n
 * @head: pointer to first node
 * Return: data (n)
 */
int pop_listint(listint_t **head)
{
	int get_data;
	listint_t *tmp = *head;

	if (*head == NULL)
	{
		return (0);
	}

	get_data = (*head)->n;

	*head = (*head)->next;
	free(tmp);

	return (get_data);
}

