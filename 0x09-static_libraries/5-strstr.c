#include "main.h"
#include <stdlib.h>

/**
 * _strstr - locates a substring
 * @haystack: main string
 * @needle: substr
 * Return: substring
 */

char *_strstr(char *haystack, char *needle)
{
	int i = 0, s = 0;

	while (needle[s] != '\0')
		s++;

	while (*haystack)
	{
		while (needle[i])
		{

			if (needle[i] != haystack[i])
				break;
			i++;
		}
		if (i != s)
			haystack++;
		else
			return (haystack);
	}
	return (NULL);
}
