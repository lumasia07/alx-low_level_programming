#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array
 * @nmemb: number of elements
 * @size: size in bytes of elements
 * Return: pointer to allocated memory, NULL if failed
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *arr;

	unsigned int x;

	if (nmemb == 0 || size == 0)
		return (NULL);

	arr = malloc(nmemb * size);

	if (arr == NULL)
		return (NULL);

	for (x = 0; x < size; x++)
		((char *)arr)[x] = 0;

	return (arr);
}
