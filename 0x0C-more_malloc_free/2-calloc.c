#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _memset - fills memory with a constant byte
 * @s: pointer to constant byte
 * @b: to be copied
 * @n: number of times to be filled
 * Return: Pointer to memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
	{
		s[x] = b;
	}
	return (s);
}

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

	_memset(arr, 0, nmemb * size);

	return (arr);
}
