#include <stdio.h>

/**
 * main - prints alphabets a-z (lowercase) in reverse order
 * Return: 0
 */

int main(void)
{
	int c = 122;

	while (c >= 'a')
	{
		putchar(c);
		c--;
	}
	putchar('\n');
	return (0);
}
