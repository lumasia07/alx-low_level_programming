#include "main.h"

/**
 * rev_string - reverses a string
 * @s: pointer to char
 */
void rev_string(char *s)
{
	char tmp;
	int i, len, len_1;

	len = 0;
	len_1 = 0;

	while (s[len] != '\0')
	{
		len++;
	}

	len = len - 1;

	for (i = 0; i < len / 2; i++)
	{
		tmp = s[i];
		s[i] = s[len_1];
		s[len_1--] = tmp;
	}
}
