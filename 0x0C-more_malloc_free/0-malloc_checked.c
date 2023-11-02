#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * malloc_checked - allocates memory
 * @b: integer to be allocated memory using malloc
 * Return: pointer to allocated memory, else 98
 */
void *malloc_checked(unsigned int b)
{
	void *assi_gned;

	assi_gned = malloc(b);

	if (assi_gned == NULL)
	{
		exit(98);
	}
	return (assi_gned);
}
