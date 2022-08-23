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
	int cl = close(fd);

	if (cl == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * error_check - prints error from file
 * @check: fd to check for
 * @file: filename
 * @errortxt: error report
 * @fddes: destination fd
 * @fdsrc: destinaton fd
 * @code: file code
 * @buffer: buffer
 */
void error_check(int check, char *file, int code,
		char *errortxt, int fddes, int fdsrc, char *buffer)
{
	if (check < 0)
	{
		dprintf(STDERR_FILENO, "%s %s\n", errortxt, file);

		if (fddes != -1)
			fd_close(fddes);

		if (fdsrc != -1)
			fd_close(fdsrc);

		free(buffer);
		exit(code);
	}
}

/**
 * create_buffer - alloctes memory for buffer
 * @file: the name of the buffer is storing chars for
 * Return: buffer
 */
char *create_buffer(char *file)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);
	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", file);
		exit(99);
	}

	return (buffer);
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
	mode_t file_perm;

	buffer = create_buffer(des);
	fdsrc = open(src, O_RDONLY);
	error_check(fdsrc, src, 98, "Error: Can't read from file", -1,
			fdsrc, buffer);

	file_perm = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;
	fddes = open(des, O_WRONLY | O_CREAT | O_TRUNC, file_perm);
	error_check(fddes, des, 99, "Error: Can't write to", fddes,
			fdsrc, buffer);

	nread = read(fdsrc, buffer, 1024);
	error_check(fdsrc, src, 98, "Error: Can't read from file", fddes,
			fdsrc, buffer);

	while (nread > 0)
	{
		nwrite = write(fddes, buffer, nread);
		if (nwrite != nread)
			nwrite = -1;

		error_check(fddes, des, 99, "Error: Can't write to", fddes,
				fdsrc, buffer);

		nread = read(fdsrc, buffer, 1024);
		error_check(fdsrc, src, 98, "Error: Can't read from file", fddes,
				fdsrc, buffer);

		fddes = open(des, O_WRONLY | O_APPEND);
		error_check(fddes, des, 99, "Error: Can't write to", fddes,
				fdsrc, buffer);
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
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	cp(argv[1], argv[2]);
	return (0);
}
