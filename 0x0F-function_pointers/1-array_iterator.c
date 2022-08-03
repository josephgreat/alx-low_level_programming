#include "function_pointers.h"
#include <stddef.h>
/**
 * array_iterator - iterates an array and call the callback function
 * @array: array
 * @size: array length
 * @action: callback function
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	if (!array || size == 0 || !action)
		return;

	while (i < size)
	{
		action(array[i]);
		i++;
	}
}
