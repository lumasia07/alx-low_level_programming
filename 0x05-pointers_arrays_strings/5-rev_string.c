#include "main.h"

/**
 * rev_string - reverses a string
 * @s: pointer to char
 */
void rev_string(char *s)
{
	int len = 0;
	int i;
	char tmp;

	while (s[len] != '\0')
	{
		len++;
	}

	len--;

	for (i = 0; i < len / 2; i++)
	{
		tmp = s[i];
		s[i] = s[len - i];
		s[len - i] = tmp;
	}
}
