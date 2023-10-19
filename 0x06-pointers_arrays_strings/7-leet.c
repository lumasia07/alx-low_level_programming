#include "main.h"

/**
 * leet - encodes a string into 1337
 * @str: pointer to encoded string
 * Return: encoded string
 */
char *leet(char *str)
{
	int x, y;

	char *l = "aAeEoOtTlL";
	char *u = "4433007711";

	for (x = 0; str[x] != '\0'; x++)
	{
		for (y = 0; y < 10; y++)
		{
			if (str[x] == u[y])
			{
				str[x] = l[y];
			}
		}
	}

	return (str);
}
