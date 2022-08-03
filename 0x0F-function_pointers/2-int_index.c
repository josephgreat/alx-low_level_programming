#include "function_pointers.h"

/**
 * int_index - searches for an integer based on the comparism function
 * @array: array of integers
 * @size: array size
 * @cmp: comparism function
 *
 * Return: if no element matches of size is <= 0, return -1;
 * else index of first element
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int index = 0;

	if (!array || size <= 0 || !cmp)
		return (-1);

	while (index < size)
	{
		if (cmp(array[index]))
			return (index);
		index++;
	}
	return (-1);
}
