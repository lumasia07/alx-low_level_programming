#include "main.h"

/**
 * rev_string - reverses a string
 * @s: pointer to char
 */
void rev_string(char *s)
{
	char tmp;
	int i, len;

	while (s[len] != '\0')
	{
		len++;
	}

	for (i = 0; i < len / 2; i++)
	{
		tmp = s[i];
		s[i] = s[len - 1 - i];
		s[len - 1 - i] = tmp;
	}
}
