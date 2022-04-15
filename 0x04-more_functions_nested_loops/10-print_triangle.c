#include "main.h"

/**
 * print_triangle - prints a '#' character based on the number of times
 * @size: number of "#" character
 */

void print_triangle(int size)
{
	int count = 1, space, rowcount;

	while (count <= size)
	{
		for (space = size; space > count; space--)
			_putchar(' ');
		for (rowcount = size - space; rowcount < size; rowcount++)
			_putchar('#');
		_putchar('\n');
		count++;
	}

	if (size <= 0)
		_putchar('\n');
}
