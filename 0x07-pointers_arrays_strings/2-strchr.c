#include "main.h"
#include <stdio.h>

/**
 * _strchr - locates character
 * @s: pointer to string to be located
 * @c: character to be located in string
 * Return: Pointer to 1st occurence of c, otherwise NULL
 */
char *_strchr(char *s, char c)
{
	int x;

	while (1)
	{
		x = *s++;
		if (x == c)
		{
			return (s - 1);
		}
		if (x == 0)
		{
			return (NULL);
		}
	}
}
