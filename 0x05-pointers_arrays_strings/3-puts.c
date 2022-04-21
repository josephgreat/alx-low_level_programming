#include "main.h"

/**
 * _puts - writes the string in stdout
 * @str: string
 * Return: nothing
 */

void _puts(char *str)
{
	char *strch = str;
	int strlength;
	int index;

	while (*strch++)
		;

	strlength = strch - str;

	for (index = 0; index < strlength; index++)
		_putchar(str[index]);
}
