#include "main.h"
#include <stdarg.h>
/**
 * create_buff - creates a buffer to store text of file to be copied
 *
 * @s: filename string
 *
 * Return: buffer created
 */
char *create_buff(char *s)
{
	char *buff;

	buff = malloc(sizeof(char) * 1024);

	if (!buff)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", s);
		exit(99);
	}
	return (buff);
}
/**
 * close_fd - closes file descriptor
 *
 * @fd: file descriptor to close
 *
 * Return: nothing
 */
void close_fd(int fd)
{
	int val = 0;

	val = close(fd);

	if (val == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}
/**
 * main - function copies the content of a file to another file
 *
 * @argc: number of arguments/ filenames
 * @argv: array containing file names
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int fd_from, fd_to, wr, rd;
	char *buff;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buff = create_buff(argv[2]);
	fd_from = open(argv[1], O_RDONLY);
	fd_to = open(argv[2], O_TRUNC | O_WRONLY | O_CREAT, 0664);

	if (fd_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n"
			, argv[1]);
		exit(98);
	}
	while ((rd = read(fd_from, buff, 1024)) > 0)
	{
		wr = write(fd_to, buff, rd);

		if (wr != rd)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n"
				, argv[2]);
			free(buff);
			exit(99);
		}
	}
		free(buff);
		close_fd(fd_from);
		close_fd(fd_to);

	return (0);
}
