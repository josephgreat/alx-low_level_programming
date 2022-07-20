#include "main.h"

/**
 * *_memcpy - fills the first n bytes of the dest array with n bytes of src
 * @dest: array to be refilled
 * @src: array to be used for refilling
 * @n: number of bytes to be refilled
 * Return: pointer to the memory area dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		*(dest + i) = *(src + i);
		i++;
	}
	return (dest);
}
