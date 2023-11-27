#include "main.h"
/**
 * create_file - create a file
 *
 * @filename: name of file to create
 * @text_content: content of file to create
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, wr, i = 0;

	if (!filename)
		return (-1);

	fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);

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
