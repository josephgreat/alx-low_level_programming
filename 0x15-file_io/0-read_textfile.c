#include "main.h"
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stddef.h>
#include <sys/types.h>
#include <sys/stat.h>

/**
 * read_textfile - reads a text file based on the required letters needed
 * @filename: file to be read from
 * @letters: number of letters to be read
 * Return: 0 if filename is NULL or file can't be opened or read
 *		or write files or does not writethe expected amount of bytes
 *		else the actual number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	int fd, nlettersread, nletterswritten;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd < 0)
	{
		close(fd);
		return (0);
	}

	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
	{
		close(fd);
		return (0);
	}

	nlettersread = read(fd, buf, letters);
	close(fd);
	if (nlettersread < 0)
	{
		free(buf);
		return (0);
	}

	buf[nlettersread] = '\0';
	nletterswritten = write(STDOUT_FILENO, buf, nlettersread);
	free(buf);
	if (nletterswritten != nlettersread)
		return (0);

	return (nletterswritten);
}
