#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * main - carry out arithmetic operations
 * @ac: argument count
 * @argv: arguments for arithmetic operation
 *
 * Return: calculated result
 */
int main(int ac, char **argv)
{
	int a, b, result;
	int (*p)(int, int);

	if (ac != 4)
	{
		printf("Error\n");
		exit(98);
	}
	p = get_op_func(argv[2]);
	if (p == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	if ((strcmp(argv[2], "/") == 0 || strcmp(argv[2], "%") == 0) &&
				strcmp(argv[3], "0") == 0)
	{
		printf("Error\n");
		exit(100);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);

	result = p(a, b);

	printf("%d\n", result);
	return (0);
}
