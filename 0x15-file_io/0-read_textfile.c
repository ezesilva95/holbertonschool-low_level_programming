#include "main.h"
/**
 * read_textfile - funct. reads a text file and prints it to the POSIX std-output.
 * @filename: the file to open.
 * @letters: number of letters it should read and print.
 * Return: actual number of letters it could read and print, or 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_d = -1;
	ssize_t output = 0;
	char *buffer;

	if (!filename)
	{
		return (0);
	}
	file_d = open(filename, O_RDONLY);
	if (file_d < 0)
	{
		return (0);		
	}
	buffer = malloc(sizeof(char) * letters);
	if (!buffer)
	{
		close(file_d);
		return (0);
	}

	output = read(file_d, buffer, letters);
	if (output < 0)
	{
		free(buffer);
		close(file_d);
		return (0);
	}

	output = write(STDOUT_FILENO, buffer, output);
	free(buffer);
	close(file_d);
	if (output < 0)
	{
		return (0);
	}
	return (output);
}
