#include "main.h"
#include <stdio.h>

/**
 * print_array - prints the elements in array, seperated by comma
 * @a: string
 * @n: length of array
 * Return: nothing
 */

void print_array(int *a, int n)
{
	int i = 0;

	if (i >= n)
		printf("\n");
	while (i < n)
	{
		if (i < n - 1)
			printf("%d, ", *(a + i));
		else
			printf("%d\n", *(a + i));
		i++;
	}
}
