#include <stdio.h>

/**
 * main - prints numbers from 0-9
 *
 * Return: 0
 */

int main(void)
{
	int n = 48;

	while (n <= '9')
	{
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
