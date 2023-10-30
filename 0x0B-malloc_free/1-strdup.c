#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _strdup - dupliactes string and returns pointer to new allocation
 * @str: string to be duplicated
 * Return: pointer to new location, otherwise NULL
 */
char *_strdup(char *str)
{
	char *ar_dup;
	unsigned int i, j;

	i = 0;
	j = 0;

	if (str == NULL)
		return (NULL);

	while (str[j])
		j++;

	ar_dup = (char *)malloc((j + 1) * sizeof(char));

	if (ar_dup == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
	{
		ar_dup[i] = str[i];
	}

	return (ar_dup);
}

