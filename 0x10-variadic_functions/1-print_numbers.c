#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * print_numbers - print the numbers from a variadic call
 * @separator: numbers divider
 * @n: number of arguments expected
 * Return: Nothing
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list nums_list;

	if (n == 0)
		return;

	va_start(nums_list, n);

	for (i = 0; i < n; i++)
	{
		int num = va_arg(nums_list, int);

		if (separator != NULL && i != (n - 1))
			printf("%d%s", num, separator);
		else
			printf("%d", num);
	}
	printf("\n");
}
