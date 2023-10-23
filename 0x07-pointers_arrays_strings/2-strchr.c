#include "main.h"

/**
 * _strchr - locates character
 * @s: pointer to string to be located
 * @c: character to be located in string
 * Return: Pointer to 1st occurence of c, otherwise NULL
 */
char *_strchr(char *s, char c)
{
	int j;

	for (j = 0; s[j] != '\0'; j++)
	{
		if (s[j] == c)
		{
			return (s + j);
		}
	}
	return (0)
}
