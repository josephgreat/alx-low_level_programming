#include "main.h"
#include <stdlib.h>

/**
 * _strconcat - concatenate two strings
 * @s1: string to be concatenated
 * @s2: string to be concatenated
 * Return: NULL if error, else concatenated string
 */

char *str_concat(char *s1, char *s2)
{
	char *newstr;
	int s1len = 0, s2len = 0, i = 0, j = 0, len;

	if (s1 == NULL || s2 == NULL)
		return ("");
	while (s1[s1len])
		s1len++;
	while (s2[s2len])
		s2len++;

	len = s1len + s2len + 1;

	newstr = malloc(sizeof(char) * len);

	if (!newstr)
		return (NULL);
	while (i < len)
	{
		if(i < s1len)
			*(newstr + i) = *(s1 + i);
		else
		{
			*(newstr + i) = *(s2 + j);
			j++;
		}
		i++;
	}
	return (newstr);
}
