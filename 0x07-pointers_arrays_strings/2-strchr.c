#include "main.h"
#include <stddef.h>

/**
 * *_strchr - searches for a character in a string and renders it's position
 * @s: string to be searched
 * @c: character in search for
 * Return: c if c is found or NULL if not found
 */

char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s != c)
			s++;
		else
			return (s);
	}

	if (c == '\0')
		return (s);
	return (NULL);
}
