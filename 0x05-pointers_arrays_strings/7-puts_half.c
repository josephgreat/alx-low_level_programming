#include "main.h"

/**
 * puts_half - prints half of the string
 * @str: string
 * Return: nothing
 */

void puts_half(char *str)
{
	int len, i;

	len = 0;
	while (*(str + len) != '\0')
		len++;

	if (len % 2 != 0)
		i = (len + 1) / 2;
	else
		i = len / 2;
	while (i <= len - 1)
	{
		if (i % len != 0)
			_putchar(*(str + i));
		i++;
	}
	_putchar('\n');
}
