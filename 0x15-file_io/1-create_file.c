#include "main.h"

/**
 * create_file - creates a file
 * @filename: name of file to create
 * @text_content: null terminated string to write to the file
 * Return: 1 on success, -1 otherwise
 */
int create_file(const char *filename, char *text_content)
{
	int f_des;
	size_t len = 0;
	ssize_t counted;

	if (filename == NULL)
		return (-1);

	f_des = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (f_des == -1)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[len] != '\0')
		{
			len++;
		}
		counted = write(f_des, text_content, len);
		if (counted != (ssize_t)len)
		{
			close(f_des);
			return (-1);
		}
	}
	close(f_des);
	return (1);
}
