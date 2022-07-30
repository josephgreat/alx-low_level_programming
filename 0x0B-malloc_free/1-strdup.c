#include "main.h"
#include <stdlib.h>

/**
 * _strdup - duplicates a string
 * @str: stricg to be duplicated
 * Return: NULL if error, else duplicated string
 */

char *_strdup(char *str)
{
	char *newstr, *tmp = str;
	int i = 0, len = 0;
	
	if (str == NULL)
		return (NULL);
	while (*tmp != '\0')
	{
		tmp++;
	}
	len = tmp - str + 1;

	newstr = malloc(len);

	if (!newstr)
		return (NULL);
	while (i < len)
	{
		*(newstr + i) = *(str + i);
		i++;
	}
	return (newstr);
}
