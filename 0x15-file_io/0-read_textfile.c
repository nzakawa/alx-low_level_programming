#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Reads a text file and prints it to POSIX stdout
 * @filename: A pointer to the name of the file.
 * @letters: The number of letters
 *
 * Return: NULL -0 if the function fails
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file;
	int len, wc;
	char *buffer;

	if (filename == NULL || letters == 0)
		return (0);
	buffer = malloc(sizeof(char) * (letters));
	if (buffer == -1)
		return (0);

	file = open(filename, O_RDONLY);
	if (file == -1)
	{
		free(buffer);
		return (0);
	}
	len = read(file, buffer, letters);
	if (len == -1)
	{
		free(buffer);
		close(file);
		return (0);
	}

	wc = write(STDOUT_FILENO, buffer, len);

	free(buffer);
	close(file);
	if (wc != len)
		return (0);
	return (len);
}
