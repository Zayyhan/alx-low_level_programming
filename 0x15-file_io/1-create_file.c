#include "main.h"
#include <unistd.h>
#include <fcntl.h>

/**
 *  create_file - Creates a file with read/write permissions
 *
 * @filename: name of the file
 * @text_content: the text to write into the file
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fd, wr, length;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
	{
		fd = open(filename, O_CREAT | O_WRONLY, 0600);
		if (fd == -1)
			return (-1);
		return (1);
	}
	fd = open(filename, O_CREAT | O_TRUNC | O_WRONLY, 0600);
        if (fd == -1)
		return (-1);

	for (length = 0; text_content[length]; length++)
	{}

		wr = write(fd, text_content, length);
	if (wr == -1)
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (1);
}
