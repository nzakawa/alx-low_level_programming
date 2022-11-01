#include "main.h"

/**
 * create_file - create a file with read/write access for user
 * @filename: name of file to create
 * @text_content: string to write to file
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int c, update, j;

	if (filename == NULL)
		return (-1);
	c = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);

	if (c == -1)
		return (-1);
	if (text_content)
	{
		for (j = 0; text_content[j] != '\0'; j++)
			;
		update = write(c, text_content, j)
			if (update == -1)
				return (-1);
	}

	close(c);
	return (-1);
}
