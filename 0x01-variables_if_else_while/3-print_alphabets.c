#include <stdio.h>

/**
 * main - prints alphabets a-z and A-Z (lower and upper case)
 * Return: 0
 */

int main(void)
{
	int c = 97;

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}

	c = 65;
	while (c <= 'Z')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
