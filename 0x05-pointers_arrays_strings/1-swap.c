#include "main.h"

/**
 * swap_int - swap the values of two integers using the function parameter
 * reference method
 * @a: first integer
 * @b: second integer
 * Return: nothing
 */

void swap_int(int *a, int *b)
{
	*a = *a + *b;
	*b = *a - *b;
	*a = *a - *b;
}
