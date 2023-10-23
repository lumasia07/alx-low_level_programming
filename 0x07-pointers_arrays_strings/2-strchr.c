#include "main.h"

/**
 * _strchr - locates character
 * @s: pointer to string to be located
 * @c: character to be located in string
 * Return: Pointer to 1st occurence of c, otherwise NULL
 */
char *_strchr(char *s, char c)
{
	int x;

	x = 0;

	while (s[x] != '\0')
	{
		if (s[x] == c)
		{
			return (s);
		}
		x++;
	}
	return (NULL);
}
