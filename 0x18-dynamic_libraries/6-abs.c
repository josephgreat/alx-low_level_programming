#include "main.h"

/**
 * _abs - converts all numbers to absolute value
 * @n: number to be checked
 * Return: 0 if failed or 1 for pass
 */

int _abs(int n)
{
	if (n < 0)
		return (n * -1);
	else
		return (n);
}
