#include <stdio.h>

/**
 * main - prints all numbers used in base 16
 * Return: 0
 */

int main(void)
{
	int c, i;

	for (i = 0; i < 10; i++)
		putchar(i + '0');

	for (c = 97; c <= 'f'; c++)
		putchar(c);

	putchar('\n');
	return (0);
}
