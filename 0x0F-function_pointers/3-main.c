#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - entry point
 * @argc: argument count
 * @argv: argument vector
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int num1, num2, result;
	int (*fo)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	fo = get_op_func(argv[2]);

	if (!fo)
	{
		printf("Error\n");
		return (99);
	}

	result = fo(num1, num2);
	printf("%d\n", result);

	return (0);
}

