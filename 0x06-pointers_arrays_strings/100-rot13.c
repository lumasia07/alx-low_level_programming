#include "main.h"

/**
 * rot13 - encodes a string
 * @str: string to be encoded
 * Return: encoded string
 */
char *rot13(char *str)
{
	int x;

	x = 0;

	while (str[x] != '\0')
	{
		while ((str[x] >= 'a' && str[x] <= 'z') ||
				(str[x] >= 'A' && str[x] <= 'Z'))
		{
			if ((str[x] >= 'a' && str[x] <= 'm') ||
					(str[x] >= 'A' && str[x] <= 'M'))
				str[x] += 13;
			else
				str[x] -= 13;
			x++;
		}
	}

	return (str);
}
