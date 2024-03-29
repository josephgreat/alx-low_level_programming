#include "main.h"
#include <stdlib.h>

/**
 * create_array - create an array of characters
 * @size: size of the array
 * @c: character to add
 * Return: NULL if @size = 0 or if fails, pointer to the array
 */

char *create_array(unsigned int size, char c)
{
	char *s = malloc(sizeof(c) * size);
	unsigned int i = 0;

	if (size == 0 || s == NULL)
		return (NULL);

	while (i < size)
	{
		*(s + i) = c;
		i++;
	}

	return (s);
}
