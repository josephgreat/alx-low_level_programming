#include "main.h"

/**
 * _strlen - lenght of a string
 * @s: string
 * Return: 0
 */

void print_rev(char *s)
{
	char *cp = s;
	int len;

	while (*cp++)
		;

	len = cp - s - 1;
	while (len != -1)
	{
		_putchar(*(s + len));
		len--;
	}
	_putchar('\n');
}
