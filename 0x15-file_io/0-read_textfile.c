#include "main.h"
/**
 * read_textfile - function reads a txt file to standard output
 *
 * @filename: name of file to be read
 * @letters: number of letters it should read and print
 *
 * Return: Actual number of letters read, else 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd, rd, wr;
	char *buf = NULL;

	if (!filename)
		return (0);

	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	rd = read(fd, buf, letters);
	wr = write(STDOUT_FILENO, buf, rd);

	if (wr == -1 || rd == -1 || fd == -1 || wr != rd)
	{
		free(buf);
		return (0);
	}

	close(fd);
	free(buf);
	return (wr);
}
