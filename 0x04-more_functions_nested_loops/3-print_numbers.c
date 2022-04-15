#include "main.h"
#include <stdio.h>

/**
 * print_numbers - prints numbers 0 - 9
 */

void print_numbers(void)
{
	char i = '0';

	while (i <= '9')
	{
		_putchar(i);
		i++;
	}

	_putchar('\n');
}
