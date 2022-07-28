#include <stdio.h>
#include <stdlib.h>

/**
 * main - name of file
 * @argc: argument count
 * @argv: argument array
 * Return: 0
 */

int main(int argc, char **argv)
{
	if (argc)
	{
		printf("%s\n", argv[0]);
		exit(EXIT_SUCCESS);
	}
	else
		exit(EXIT_FAILURE);
	return (0);
}
