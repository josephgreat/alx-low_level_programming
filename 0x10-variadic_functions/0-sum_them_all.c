#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - sums up all anonymous arguments
 * @n: number of expected arguments
 *
 * Return: 0 if n == 0, else sum of arguments
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list arg;
	unsigned int sum = 0, i;

	va_start(arg, n);

	if (n == 0)
		return (0);

	for (i = 0; i < n; i++)
	{
		int val = va_arg(arg, int);

		sum += val;
	}

	va_end(arg);
	return (sum);
}
