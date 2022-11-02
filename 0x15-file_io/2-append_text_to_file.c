#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include "main.h"
/**
 * append_text_to_file - creates a file and puts text in it
 * @filename: name for file
 * @text_content: text to put into file
 *
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file;
	ssize_t len = 0, ln = 0;
	char *ptr;

	if (filename == NULL)
		return (-1);

	file = open(filename, O_WRONLY | O_APPEND);
	if (file == -1)
		return (-1);

	if (text_content != NULL)
	{
		for (ln = 0, ptr = text_content; *ptr; ptr++)
			ln++;
		len = write(file, text_content, ln);
	}
	if (close(file) == -1 || ln != len)
		return (-1);
	return (1);
}

