#include "main.h"

/**
 * puts2 - writes the string in stdout
 * @str: string
 * Return: nothing
 */

void puts2(char *str)
{
	char *t = str;

	while (*t != '\0' && *t != '.')
	{
		_putchar(*t);
		t += 2;
	}
	_putchar('\n');
}
