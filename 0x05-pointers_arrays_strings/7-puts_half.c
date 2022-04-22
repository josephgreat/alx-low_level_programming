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

	i = (len - 2) / 2;
	while (i <= len - 1)
	{
		_putchar(*(str + i));
		i++;
	}
	_putchar('\n');
}
