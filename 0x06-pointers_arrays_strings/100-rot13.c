#include "main.h"

/**
 * rot13 - encodes a string
 * @str: string to be encoded
 * Return: encoded string
 */
char *rot13(char *str)
{
	int i, j;

	char x[] = "ABCDEGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char y[] = "NOPQRGUTVWXYZABCDEFGHIJKLMnopqrgutvwxyzabcdefgijklm";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; x[j] != '\0')
		{
			if (str[i] == x[j])
			{
				str[i] = y[j];
				break;
			}
		}
	}
	return (str);
}
