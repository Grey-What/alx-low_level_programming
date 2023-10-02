#include "main.h"
/**
 * append_text_to_file - appends text to end of file
 *
 * @filename: name of file to append text to
 * @text_content: string to append to file
 *
 * Return: 1 on success, else -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int len = 0, fd, wr;

	if (!filename)
		return (-1);

	if (text_content)
	{
		while (text_content[len] != '\0')
			len++;
	}

	fd = open(filename, O_WRONLY | O_APPEND, 0662);
	wr = write(fd, text_content, len);

	if (fd == -1 || wr == -1)
		return (-1);

	close(fd);
	return (1);
}
