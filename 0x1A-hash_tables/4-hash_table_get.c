#include "hash_tables.h"

/**
 * hash_table_get - retrieves value associated to key
 * @ht: hash table
 * @key: key to value
 * Return: Value associated with element
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int idx;
	hash_node_t *cur;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	idx = key_index((const unsigned char *)key, ht->size);
	cur = ht->array[idx];

	while (cur != NULL)
	{
		if (strcmp(cur->key, key) == 0)
			return (cur->value);
		cur = cur->next;
	}
	return (NULL);
}
