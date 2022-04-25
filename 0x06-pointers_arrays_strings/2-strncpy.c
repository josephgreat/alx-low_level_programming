#include "main.h"

/**
 * _strncpy - copy a string to another based on the number of bytes available
 * @dest: string destination
 * @src: string source
 * @n: number of bytes
 * Return: Copied string
 */

char *_strncpy(char *dest, char *src, int n)
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
		*(dest + i) = *(src + i);
		destlen++;
		i++;
	}
	destlen = srclen - 1;

	return (dest);
}


