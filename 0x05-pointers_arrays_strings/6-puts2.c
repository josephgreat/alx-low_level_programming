#include "main.h"

/**
 * puts2 - writes the string in stdout
 * @str: string
 * Return: nothing
 */

void puts2(char *str)
{
	int len, i;

	len = 0;
	while (*(str + len) != '\0')
		len++;

	i = 0;
	while (i <= len - 1)
	{
		if (i % 2 == 0)
			_putchar(*(str + i));
		i += 2;
	}
	_putchar('\n');
}
