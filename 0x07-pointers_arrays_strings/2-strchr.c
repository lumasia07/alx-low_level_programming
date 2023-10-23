#include "main.h"

/**
 * _strchr - locates character
 * @s: pointer to string to be located
 * @c: character to be located in string
 * Return: Pointer to 1st occurence of c, otherwise NULL
 */
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (!c)
	{
		return (s);
	}
	return (NULL);
}

