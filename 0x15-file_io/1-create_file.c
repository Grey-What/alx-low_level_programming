#include "main.h"
/**
 * create_file - functio ncreates a file
 *
 * @filename: name of file to create
 * @text_content: Null terminated string to write into file
 *
 * Return: 1 on success, on fail
 */
int create_file(const char *filename, char *text_content)
{
	int fd, wr, len = 0;

	if (!filename)
		return (-1);

	if (text_content)
	{
		while (text_content[len] != '\0')
			len++;
	}

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	wr = write(fd, text_content, len);

	if (fd == -1 || wr == -1)
		return (-1);

	close(fd);
	return (1);
}
