#include <stdio.h>

/**
 * main - prints numbers from 0-9 seperated by comma and space
 *
 * Return: 0
 */

int main(void)
{
	int n = 0;

	while (n <= 9)
	{
		putchar(n + '0');
		if (n != 9)
		{
			putchar(',');
			putchar(' ');
		}
		n++;
	}
	putchar('\n');
	return (0);
}
