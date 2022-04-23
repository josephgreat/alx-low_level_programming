#include "main.h"

/**
 * _strcpy - copies a string
 * @dest: output string
 * @src: string source
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	char *t = src;
	int i;

	*(dest + 0) = *t;
	i = 1;
	while (*t++)
	{
		*(dest + i) = *t;
		i++;
	}
	return (dest);
}
