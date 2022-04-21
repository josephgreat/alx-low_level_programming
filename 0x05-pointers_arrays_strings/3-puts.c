#include "main.h"

/**
 * _puts - writes the string in stdout
 * @str: string
 * Return: nothing
 */

void _puts(char *str)
{
	char *t = str;

	while (*t != '\0')
	{
		_putchar(*t);
		t++;
	}
}
