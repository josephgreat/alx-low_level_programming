#include "main.h"

/**
 * print_line - prints a "_" character based on the number of times
 * @n: number ot "_" character
 */

void print_line(int n)
{
	int count = 1;

	while (count <= n)
	{
		_putchar('_');
		count++;
	}
	_putchar('\n');
}
