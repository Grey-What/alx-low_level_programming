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
	int fd;
	int rd = 0;
	int wr = 0;
	char *buf = malloc(sizeof(char) * letters);

	if (!filename || buf == NULL)
		return (0);

	fd = open(filename, O_RDONLY | O_EXCL);
	if (fd == -1)
		return (0);

	rd = read(fd, buf, letters);
	if (rd <= 0)
		return (0);

	wr = write(STDOUT_FILENO, buf, rd);

	if (wr == -1 || wr != rd)
		return (0);

	close(fd);
	free(buf);
	return (wr);
}
