#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * argstostr - concatenates all args in the program
 * @ac: first argument
 * @av: second argument
 * Return: pointer to new string, NULL if failed
 */
char *argstostr(char ac, char **av)
{
	int x, y, z = 0;
	int total_len = 0;
	char *conc_arg;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (x = 0; x < ac; x++)
	{
		for (y = 0; av[x][y] != '\0'; y++)
			total_len++;
		total_len++;
	}

	conc_arg = (char *)malloc((total_len + 1) * sizeof(char));

	if (conc_arg == NULL)
		return (NULL);

	for (x = 0; x < ac; x++)
	{
		for (y = 0; av[x][y] != '\0'; y++)
			conc_arg[z++] = av[x][y];
		conc_arg[z++] = '\n';
	}

	conc_arg[z] = '\0';

	return (conc_arg);
}
