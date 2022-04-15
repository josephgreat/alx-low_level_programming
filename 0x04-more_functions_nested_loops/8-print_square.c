#include "main.h"

/**
 * print_square - print # based on the n times cols and rows
 * @size: number of #
 */

void print_square(int size)
{
	int rowcount, colcount;

	for (colcount = 1; colcount <= size; colcount++)
	{
		for (rowcount = 1; rowcount <= size; rowcount++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}

