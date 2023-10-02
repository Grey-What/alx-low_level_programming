#include "main.h"
/**
 * read_textfile - reads a text file and prints it to standard output
 *
 * @filename: file to be read
 * @letters: number of letters to be read and printed
 *
 * Return: 0 on fail, else number of char printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int opn, rd, wr;
	char *buff;

	if (!filename)
		return (0);

	buff = malloc(sizeof(char) * letters);
	if (!buff)
		return (0);

	opn = open(filename, O_RDONLY);
	rd = read(opn, buff, letters);
	wr = write(STDOUT_FILENO, buff, rd);

	if (opn == -1 || rd == -1 || wr == -1 || wr != rd)
	{
		free(buff);
		return (0);
	}
	free(buff);
	close(opn);

	return (wr);
}
