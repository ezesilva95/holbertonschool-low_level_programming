#include "main.h"
/**
 * create_file - function that creates a file.
 * @filename: is the name of the file to create.
 * @text_content: is a NULL terminated string to write to the file.
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int file_d, length = 0;

	if (!filename)
	{
		return (-1);
	}

	file_d = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);

	if (file_d < 0)
	{
		return (-1);
	}
	while (text_content && text_content[length])
	{
		length++;
	}
	if (write(file_d, text_content, length) < 0)
	{
		close(file_d);
		return (-1);
	}

	close(file_d);
	return (1);
}
