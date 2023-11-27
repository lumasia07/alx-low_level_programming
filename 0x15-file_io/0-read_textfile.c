#include "main.h"

/**
 * read_textfile - reads a text file and print to to POSIX
 * @filename: pointer to file name
 * @letters: number of letters to be printed
 * Return: actual number of letters it could print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *f;
	char *bf;
	ssize_t count, counted;

	if (filename == NULL)
		return (0);

	f = fopen(filename, "r");

	if (f == NULL)
		return (0);

	bf = malloc(letters + 1);

	if (bf == NULL)
	{
		fclose(f);
		return (0);
	}

	count = fread(bf, 1, letters, f);

	if (count <= 0)
	{
		free(bf);
		fclose(f);
		return (0);
	}

	bf[count] = '\0';

	counted = write(STDOUT_FILENO, bf, count);

	free(bf);

	if (counted != count)
	{
		fclose(f);
		return (0);
	}
	fclose(f);
	return (count);
}
