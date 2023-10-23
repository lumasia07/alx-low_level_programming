#include "main.h"

/**
 * _strchr - locates character
 * @s: pointer to string to be located
 * @c: character to be located in string
 * Return: Pointer to 1st occurence of c, otherwise NULL
 */
char *_strchr(char *s, char c)
{
	int i;

	i = 0;

	while (s[i] && s[i] != c)
	{
		i++;
	}

	return (s[i] == c ? s : NULL);
}
