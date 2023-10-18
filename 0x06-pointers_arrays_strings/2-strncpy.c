#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: pointer to destination
 * @src: pointer to source
 * @n: number of characters to be copied
 * Return: pointer to returned string dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;
	int j;

	i = 0;
	j = 0;

	while (src[i] != '\0' && n > 0)
	{
		dest[j] = src[i];
		j++;
		i++;
		n--;
	}

	while (n > 0)
	{
		dest = '\0';
		j++;
		n--;
	}

	return (dest);
}
