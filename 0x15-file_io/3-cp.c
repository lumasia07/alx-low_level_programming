#include "main.h"

/**
 * main - entry point
 * @argc: argument count
 * @argv: argument vector
 * Return: Always 0 on Success
 */
int main(int argc, char *argv[])
{
	int des_from, des_to;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Error%s\n", argv[0]);
		exit(97);
	}

	des_from = _source(argv[1]);
	des_to = _dest(argv[2]);
	_cp(des_from, des_to);

	_close(des_from, argv[1]);
	_close(des_to, argv[2]);

	return (0);
}

/**
 * _source - opens source file
 * @filename: file to be copied
 * Return: opened file
 */
int _source(const char *filename)
{
	int f_des = open(filename, O_RDONLY);

	if (f_des == -1)
	{
		dprintf(STDERR_FILENO, "Error%s\n", filename);
		exit(98);
	}
	return (f_des);
}

/**
 * _dest - opens destination file
 * @filename: file to be opened
 * Return: opened file
 */
int _dest(const char *filename)
{
	int f_des = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR |
			 S_IRGRP | S_IROTH);

	if (f_des == -1)
	{
		dprintf(STDERR_FILENO, "Error%s\n", filename);
		exit(99);
	}
	return (f_des);
}

/**
 * _cp - copies file from source to des
 * @des_from: source
 * @des_to: destination
 */
void _cp(int des_from, int des_to)
{
	ssize_t count, counted;
	char bf[BUF_SIZE];

	while ((count = read(des_from, bf, BUF_SIZE)) > 0)
	{
		counted = write(des_to, bf, count);

		if (counted != count)
		{
			dprintf(STDERR_FILENO, "Error\n");
			exit(99);
		}
	}

	if (count == -1)
	{
		dprintf(STDERR_FILENO, "Error\n");
		exit(98);
	}
}

/**
 * _close - closes file
 * @f_des: file copied
 * @filename: file to be closed
 */
void _close(int f_des, const char *filename)
{
	if (close(f_des) == -1)
	{
		dprintf(STDERR_FILENO, "Cant close%s\n", filename);
		exit(100);
	}
}
