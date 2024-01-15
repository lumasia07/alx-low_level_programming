#include "main.h"

/**
 * _strcpy - function that copies string
 * @dest: pointer to buffer
 * @src: pointer to string
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	dest[i] = '\0';

	return (dest);
}


