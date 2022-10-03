#include "main.h"
#include <stddef.h>

/**
 * *_strpbrk - searches for a character from a string
 * in a string and renders it's position
 * @s: string to be searched
 * @accept: string in search for
 * Return: @s if a character in @accept is found or NULL if not found
 */

char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
				return (s);
		}
		s++;
	}

	return (NULL);
}
