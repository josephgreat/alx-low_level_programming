#include <stdio.h>

/*
 * main - prints alphabets a-z (lowercase)
 *
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
	putchar('\n');
	return (0);
}
