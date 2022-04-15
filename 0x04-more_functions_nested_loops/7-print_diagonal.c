#include "main.h"

/**
 * print_diagonal - prints a \ character based on the number of times
 * @n: number of "\\" character
 */

void print_diagonal(int n)
{
	int count = 1, space;

	while (count <= n)
	{
		for (space = 1; space < count; space++)
			_putchar(' ');
		_putchar('\\');
		_putchar('\n');
		count++;
	}
	_putchar('\n');
}
