#include "lists.h"

/**
 * add_node - adds a new node to beginning of node
 * @head: first node
 * @str: pointer to a const str
 * Return: address of new element
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *add;

	if (str == NULL)
		return (NULL);

	add = malloc(sizeof(list_t));

	if (add == NULL)
	{
		return (NULL);
	}

	add->str = strdup(str);

	if (add->str == NULL)
	{
		free(add);
		return (NULL);
	}

	add->len = 0;

	while (str[add->len] != '\0')
	{
		add->len++;
	}

	add->next = *head;
	*head = add;

	return (add);
}
