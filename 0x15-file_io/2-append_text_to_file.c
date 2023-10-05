#include "main.h"
#include <fcntl.h>
#include <stdlib.h>
#include <string.h>

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: the name of the file
 * @text_content: NULL terminated string to append
 *
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t write_count;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}

	write_count = write(fd, text_content, strlen(text_content));

	if (write_count == -1 || write_count != (ssize_t)strlen(text_content))
	{
		close(fd);
		return (-1);
	}

	close(fd);
	return (1);
}
