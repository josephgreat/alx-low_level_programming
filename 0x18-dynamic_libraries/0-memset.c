#include "main.h"

/**
 * *_memset - fills the first n bytes of the s array with b
 * @s: array to be refilled
 * @b: string for refilling
 * @n: number of bytes to be refilleddd
 * Return: pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		*(s + i) = b;
		i++;
	}
	return (s);
}
