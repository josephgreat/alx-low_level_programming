#include "main.h"

/**
 * print_rev - reverse of a string
 * @s: string
 * Return: 0
 */

void print_rev(char *s)
{
	char *cp = s;
	int len, i;

	while (*cp++)
		;
	len = cp - s - 1;

	for (i = len - 1; i > -1; i--)
	{
		_putchar(*(s + i));
	}
	_putchar('\n');
}
