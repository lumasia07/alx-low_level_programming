#include "hash_tables.h"

/**
 * hash_table_set - adds elements in a hash table
 * @ht: hash table
 * @key: key
 * @value: value associated to key
 * Return: 1 on success, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_node;
	char *val_cp;
	unsigned long int idx, i;

	if (ht == NULL || key == NULL || value == NULL || *key == '\0')
		return (0);

	val_cp = strdup(value);
	if (val_cp == NULL)
		return (0);

	idx = key_index((const unsigned char *)key, ht->size);
	for (i = idx; ht->array[i]; i++)
	{
		if (strcmp(ht->array[i]->key, key) == 0)
		{
			free(ht->array[i]->value);
			ht->array[i]->value = val_cp;
			return (1);
		}
	}

	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
	{
		free(val_cp);
		return (0);
	}
	new_node->key = strdup(key);
	if (new_node == NULL)
	{
		free(new_node);
		return (0);
	}
	new_node->value = val_cp;
	new_node->next = ht->array[idx];
	ht->array[idx] = new_node;
	return (1);
}
