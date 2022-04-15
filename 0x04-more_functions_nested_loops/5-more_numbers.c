#include "main.h"

/**
 * more_numbers - prints 0 - 14 ten times
 */

void more_numbers(void)
{
	int count = 0, num;

	while (count < 10)
	{
		for (num = 0; num <= 14; num++)
		{
			if (num > 9)
				_putchar((num / 10) + '0');
			_putchar((num % 10) + '0');
		}

		_putchar('\n');

		count++;
	}
}
