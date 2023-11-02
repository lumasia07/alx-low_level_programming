#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _memcpy - copies a memory area
 * @dest: destination string
 * @src: source destination
 * @n: number of bytes to be copied
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
	{
		dest[x] = src[x];
	}
	return (dest);
}

/**
 * _realloc - reallocates memory block using malloc and free
 * @ptr: pointer to previously allocated memory
 * @old_size: size in bytes of allocated space for ptr
 * @new_size: size in bytes of new memory block
 * Return: pointer to new aloocated memory space
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	if (ptr == NULL)
		return (malloc(new_size));

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	if (new_size == old_size)
		return (ptr);

	void *ptr_cpy = malloc(new_size);

	if (ptr_cpy == NULL)
		return (NULL);

	_memcpy(ptr_cpy, ptr, old_size);

	free(ptr);

	return (ptr_cpy);
}
