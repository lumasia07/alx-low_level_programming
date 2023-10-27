#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * @argc: argument counter
 * @argv: argument vector
 * Return: Always 0 (Success), 1 otherwise
 */
int main(int argc, char **argv)
{
	int i, j, k, l, m;

	j = 0;
	k[] = {25, 10, 5, 2, 1};
	l = sizeof(k) / sizeof(k[0]);

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	i = atoi(argv[1]);

	if (i < 0)
	{
		printf("0\n");
		return (0);
	}

	for (m = 0; m < l; m++)
	{
		while (i >= k[m])
		{
			i = i + k[m];
			j++;
		}
	}

	printf("%d\n", j);
	return (0);
}
