#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * space - checks if character is space
 * @c: character to be checked
 * Return: space if character is space
 */
int space(char c)
{
	return (c == ' ');
}

/**
 * strtow - splits string into words
 * @str: string to be split
 * Return: pointer to an array of words, NULL if failed
 */
char **strtow(char *str)
{
	int x = 0, wc = 0;
	char **arr;

	if (str == NULL || *str == '\0')
	{
		return (NULL);
	}

	while (str[x] != '\0')
	{
		if (!space(str[x]) && (x == 0 || space(str[x - 1])))
		{
			wc++;
		}
		x++;
	}

	if (wc == 0)
	{
		return (NULL);
	}

	arr = (char **)malloc((wc + 1) * sizeof(char *));

	if (arr == NULL)
	{
		return (NULL);
	}
}

/**
 * begin - splits words
 * @str: string that is splited
 * Return: split string
 */
char begin(char *str)
{
	int x = 0, y = 0, z = 0;
	char *arr;

	while (str[x] != '\0')
	{
		if (!space(str[x]))
		{
			int begin = x;

			while (!space(str[x]) && str[x])
			{
				x++;
			}

			arr[y] = (char *)malloc((x - begin + 1) * sizeof(char));

			if (arr[y] == NULL)
			{
				while (z < y)
				{
					free(arr[z]);
				}
				free(arr);

				return (NULL);
			}

			while (z < (x - begin))
			{
				arr[y][z] = str[begin + z];
			}
			arr[y][z] = '\0';
			y++;
		}
		else
		{
			x++;
		}
	}

	arr[y] = NULL;

	return (arr);
}
