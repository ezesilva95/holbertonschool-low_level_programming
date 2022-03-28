#include "main.h"
/**
 * append_text_to_file - function that appends text at the end of a file.
 * @filename: name of the file.
 * @text_content: is the NULL terminated string to add at the end of the file.
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file_d, length = 0;

	if (!filename)
	{
		return (-1);
	}
	file_d = open(filename, O_RDWR | O_APPEND);
	if (file_d < 0)
	{
		return (-1);
	}
	if (!text_content)
	{
		close(file_d);
		return (1);
	}

	while (text_content[length])
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
