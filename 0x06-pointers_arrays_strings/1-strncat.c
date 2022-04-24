#include "main.h"

/**
 * _strncat - concatenate two strings based on the number of bytes available
 * @dest: string destination
 * @src: string source
 * @n: number of bytes
 * Return: Concatenated string
 */

char *_strncat(char *dest, char *src, int n)
{
	char *srctemp = src;
	char *desttemp = dest;
	int destlen, srclen, i;

	while (*srctemp++)
		;

	while (*desttemp++)
		;
	srclen = srctemp - src - 1;
	destlen = desttemp - dest - 1;
	i = 0;

	while (i < n)
	{
		*(dest + destlen) = *(src + i);
		destlen++;
		i++;
	}
	*(dest + destlen) = '\0';

	return (dest);
}


