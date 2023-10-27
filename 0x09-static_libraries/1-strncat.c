#include "main.h"

/**
 * _strncat - copies a string
 * @dest: destination string
 * @src: source string
 * @n: number of characters to be copied
 * Return: pointer to resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	i = 0;
	j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	while (src[j] != '\0' && n > 0)
	{
		dest[i] = src[j];
		i++;
		j++;
		n--;
	}

	dest[i] = '\0';

	return (dest);
}
