#include "main.h"
#include <stdio.h>

/**
 * print_most_numbers - prints numbers 0 - 9 skipping 2 and 4
 */

void print_most_numbers(void)
{
	char i;

	for (i = '0'; i <= '9'; i++)
	{
		if (i == '2' || i == '4')
		{
			continue;
		}
		_putchar(i);
	}

	_putchar('\n');
}
