#include "main.h"
/**
 * append_text_to_file - appends text at the end of a file
 *
 * @filename: name of file
 * @text_content: content to append
 *
 * Return: 1 on success, -1 on fail
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, wr, i = 0;

	if (!filename)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND | O_EXCL);

	if (text_content)
	{
		while (text_content[i] != '\0')
		{
			i++;
		}
	}
	wr = write(fd, text_content, i);

	if (fd == -1 || wr == -1)
		return (-1);
	close(fd);
	return (1);
}
