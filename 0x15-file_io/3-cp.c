#include "main.h"
#include <stdarg.h>
/**
 * make_buff - create a buffer
 *
 * @file_name: name of file to write too
 *
 * Return: buffer
 */
char *make_buff(char *file_name)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);

	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_name);
		exit(99);
	}

	return (buffer);
}
/**
 * close_fd - close a file and chack success
 *
 * @fd: fd of file to close
 */
void close_fd(int fd)
{
	int check;

	check = close(fd);

	if (check == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}
/**
 * main - copies content from one file to the next
 *
 * @argc: number of arguments / file names
 * @argv: list of file names
 *
 * Return: void
 */
int main(int argc, char *argv[])
{
	int ffrom, fto, rd, wr;
	char *buff;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	buff = make_buff(argv[2]);
	ffrom = open(argv[1], O_RDWR);
	rd = read(ffrom, buff, 1024);
	fto = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);

	do {
		if (ffrom == -1 || rd == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			free(buff);
			exit(98);
		}
		wr = write(fto, buff, 1024);

		if (wr == -1 || fto == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			free(buff);
			exit(99);
		}
		rd = read(ffrom, buff, 1024);
		fto = open(argv[2], O_WRONLY | O_APPEND);

	} while (rd > 0);

	free(buff);
	close_fd(ffrom);
	close_fd(fto);

	return (0);
}
