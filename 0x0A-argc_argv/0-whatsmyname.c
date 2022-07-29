#include "main.h"

/**
 * main - name of file
 * @argc: argument count
 * @argv: argument array
 * Return: 0
 */

int main(int __attribute__((__unused__)) argc, char **argv)
{
	while (*argv[0])
	{
		_putchar(*argv[0]);
		argv[0]++;
	}
	_putchar('\n');
	return (0);
}
