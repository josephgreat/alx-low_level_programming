#include "main.h"

/**
 * reverse_array - reverse an array
 * @a: array
 * @n: number of elements in array
 */

void reverse_array(int *a, int n)
{
	int rev[n];
	int i = n - 1;

	while (i--)
	{
		rev[n - 1 - i] = a[i];
	}

	*a = rev;
}
