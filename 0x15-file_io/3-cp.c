#include <sys/types.h>
#include <sys/stat.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
/**
 * fd_close - closes fd
 * @fd: file descriptor to be closed
 * Return: nothing
 */

void fd_close(int fd)
{
	if (close(fd) == -1)
	{
		dprintf(STDOUT_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * fd_src_error - prints error from src file
 * @src: src filename
 */
void fd_src_error(char *src)
{
	dprintf(STDOUT_FILENO, "Error: Cant't read from file %s\n", src);
	exit(98);
}

/**
 * cp - copies a file to another
 * @src: file to be read
 * @des: destinaton file
 * Return: buffer
 */

void cp(char *src, char *des)
{
	char *buffer;
	int fdsrc, fddes, nread, nwrite;

	fdsrc = open(src, O_RDONLY);
	if (fdsrc == -1)
		fd_src_error(src);

	fddes = open(des, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fddes == -1)
	{
		dprintf(STDOUT_FILENO, "Error: Can't write to %s\n", des);
		fd_close(fdsrc);
		exit(99);
	}

	buffer = malloc(sizeof(char) * 1024);
	if (buffer == NULL)
	{
		fd_close(fdsrc);
		fd_close(fddes);
		return;
	}

	nread = read(fdsrc, buffer, 1024);
	if (nread == -1)
		fd_src_error(src);

	nwrite = write(fddes, buffer, nread);
	if (nwrite != nread)
	{
		free(buffer);
		fd_close(fdsrc);
		return;
	}
	free(buffer);
	fd_close(fdsrc);
	fd_close(fddes);
}

/**
 * main - run program
 * @argv: arguments
 * @argc: argument count
 * Return: 0
 */

int main(int argc, char **argv)
{
	if (argc != 3)
	{
		dprintf(STDOUT_FILENO, "Usage: %s file_from file_to\n", argv[0]);
		exit(97);
	}

	cp(argv[1], argv[2]);
	return (0);
}
