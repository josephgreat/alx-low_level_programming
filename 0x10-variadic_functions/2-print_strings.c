#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * print_strings - print the strings from a variadic call
 * @separator: strings divider
 * @n: number of arguments expected
 * Return: Nothing
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list strings_list;

	if (n == 0)
		return;

	va_start(strings_list, n);

	for (i = 0; i < n; i++)
	{
		char *string = va_arg(strings_list, char *);

		if (string == NULL)
			string = "nil";

		if (separator != NULL)
		{
			if (i != (n - 1))
				printf("%s%s", string, separator);
			else
				printf("%s", string);
		}
		else
			printf("%s", string);
	}
	printf("\n");
}