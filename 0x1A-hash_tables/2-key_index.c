#include "hash_tables.h"

/**
 * key_index - returns index of a key in hash table array
 * @key: key
 * @size: size of array of hash table
 * Return: INdex at which key/value pair should be stored
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hashed;
	hashed = hash_djb2(key);

	return (hashed % size);
}
