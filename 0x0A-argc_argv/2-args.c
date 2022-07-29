#include <stdio.h>
#include "main.h"
/**
 * main - print the arguments passed
 * @argc: argument count
 * @argv: argument vector
 * Return: alwyas 0
 */


int main(int argc, char **argv)
{
	int i = 0;

	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}

	return (0);
}
