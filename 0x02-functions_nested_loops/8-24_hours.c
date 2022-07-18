#include "main.h"

/**
 * jack_bauer - prints the 24 hours in a day
 */
void jack_bauer(void)
{
	int i, j, k, l;

	for (i = 0; i <= 2; i++)
	{
		for (j = 0; j <= 9 && i <= 2; j++)
		{
			for (k = 0; k <= 5; k++)
			{
				for (l = 0; l <= 9 && k <= 5; l++)
				{
					_putchar(i + '0');
					_putchar(j + '0');
					_putchar(':');
					_putchar(k + '0');
					_putchar(l + '0');
					_putchar('\n');
				}
			}
		}
	}
}
