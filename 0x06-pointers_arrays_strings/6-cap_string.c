#include "main.h"

/**
 * cap_string - capiltalizes all words of a string
 * @str: pointer to string
 * Return:modified string
 */
char *cap_string(char *str)
{
	int x, y;

	char unq[13] = {' ', '\t', '\n', ',', ';', '.', '!', '?',
		 '"', '(', ')', '{', '}'};

	for (x = 0; str[x] != '\0'; x++)
	{
		if (x == 0 && str[x] >= 'a' && str[x] <= 'z')
		{
			str[x] = str[x] - 32;
		}

		for (y = 0; y < 13; y++)
		{
			if (str[x] == unq[y])
			{
				if (str[x + 1] >= 'a' && str[x + 1] <= 'z')
				{
					str[x + 1] -= 32;
				}
			}
		}
	}

	return (str);
}
