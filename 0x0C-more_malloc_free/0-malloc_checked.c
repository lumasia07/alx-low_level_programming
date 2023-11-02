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
	void *assigned;

	assigned = malloc(b);
	
	if (assigned == NULL)
	{
		exit(98);
	}
	return (assigned);
}
