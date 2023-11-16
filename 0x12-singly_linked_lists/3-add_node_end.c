#include "lists.h"

/**
 * add_node_end - adds new node at the end
 * @head: first node;
 * @str: str to be added and copied to las node
 * Return: address of new element
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *end;
	list_t *new = *head;

	if (str == NULL)
		return (NULL);

	end = malloc(sizeof(list_t));

	if (end == NULL)
		return (NULL);

	end->str = strdup(str);

	if (end->str == NULL)
	{
		free(end);
		return (NULL);
	}
	
	end->len = strlen(str);

	if (new != NULL)
	{
		while (new->next != NULL)
		{
			new = new->next;
		}
		new->len = end->len;
	}

	if (*head == NULL)
	{
		*head = end;
	}
	else
	{
		new->next = end;
	}

	return (end);
}

