#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * string_nconcat - concatenates s1 and s2
 * @s1: first string
 * @s2: second string
 * @n: number of sw2 bytes to concatenate
 * Return: pointer to newly allocated space
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *conc_str;
	unsigned int x, y, l1 = 0, l2 = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[l1])
		l1++;

	while (s2[l2])
		l2++;

	if (n >= l2)
		n = l2;

	conc_str = malloc((l1 + n + 1) * sizeof(char));

	if (conc_str == NULL)
		return (NULL);

	x = 0;
	y = 0;

	while (x < l1)
		conc_str[x] = s1[x];
		x++;

	while (y < n)
		conc_str[x + y] = s2[y];
		y++;

	conc_str[x + y] = '\0';

	return (conc_str);
}

