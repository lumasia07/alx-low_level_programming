#include "main.h"

/**
 * append_text_to_file - appends text to file
 * @filename: name of file
 * @text_content: null-terminated string
 * Return: 1 on success, -1 otherwise
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int des;
	int written;
	size_t count = 0;

	if (filename == NULL)
		return (-1);

	des = open(filename, O_WRONLY | O_APPEND);

	if (des == -1)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[count] != '\0')
		{
			count++;
		}

		written = write(des, text_content, count);

		if (written == -1)
		{
			close(des);
			return (-1);
		}
	}
	close(des);
	return (1);
}
