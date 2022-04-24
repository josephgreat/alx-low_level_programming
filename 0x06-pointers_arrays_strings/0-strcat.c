#include "main.h"

/**
 * _strcat - concatenate two strings
 * @dest: string destination
 * @src: string source
 * Return: Concatenated string
 */

char *_strcat(char *dest, char *src)
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

	while (i <= srclen)
	{
		*(dest + destlen) = *(src + i);
		destlen++;
		i++;
	}

	return (dest);
}


