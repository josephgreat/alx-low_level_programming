#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * main - ADD arguments passed
 * @argc: argument count
 * @argv: argument vector
 * Return: alwyas 0
 */


int main(int argc, char **argv)
{
	int result = 0, i;

	if (argc != 1)
	{
		for (i = 1; i < argc; i++)
		{
			if (atoi(argv[i]) == 0 && strcmp(argv[i], "0") != 0)
			{
				printf("Error\n");
				return (1);
			}
			result += atoi(argv[i]);
		}
	}
	printf("%d\n", result);
	return (0);
}
