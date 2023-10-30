#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * create_array - creates an array of chars and initializes it with c
 * @size: size of array
 * @c: character to be initialized with
 * Return: pointer to array, NULL if failed or size is zero
 */
char *create_array(unsigned int size, char c)
{
	char *ar;
	unsigned int i;

	if (size == 0)
		return (NULL);

	ar = (char *)malloc(size * sizeof(char));

	if (ar == NULL)
		return (0);

	for (i = 0; i < size; i++)
	{
		*(ar + i) = c;
	}

	*(ar + i) = '\0';

	return (ar);
}
