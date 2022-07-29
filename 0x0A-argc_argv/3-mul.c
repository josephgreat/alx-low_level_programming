#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - multiply arguments passed
 * @argc: argument count
 * @argv: argument vector
 * Return: alwyas 0
 */


int main(int argc, char **argv)
{
	int result = 0, arg1, arg2;
	
	if (argc == 3)
	{
		arg1 = atoi(argv[1]);
		arg2 = atoi(argv[2]);
		result = arg1 * arg2;
		printf("%d\n", result);
	}
	else
		printf("Error\n");

	return (0);
}
