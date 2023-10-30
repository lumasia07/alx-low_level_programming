#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second strinG
 * Return: pointer to concatenated string, NULL otherwise
 */
char *str_concat(char *s1, char *s2)
{
	char *cat_str;
	unsigned int i, j, k;

	i = 0;
	j = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[i] != '\0')
		i++;

	while (s2[j] != '\0')
		j++;

	cat_str = (char *)malloc((i + j + 1) * sizeof(char));

	if (cat_str == NULL)
		return (NULL);

	for (k = 0; k < i; k++)
	{
		cat_str[k] = s1[k];
	}

	for (k = 0; k < j; k++)
	{
		cat_str[i + k] = s2[k];
	}

	cat_str[i + j] = '\0';

	return (cat_str);
}
