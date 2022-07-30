#include "main.h"
#include <stdlib.h>

/**
 * _strdup - duplicates a string
 * @str: stricg to be duplicated
 * Return: NULL if error, else duplicated string
 */

char *_strdup(char *str)
{
	char *newstr = malloc(sizeof(str));
	unsigned long int i = 0;

	if (!newstr || str == NULL)
		return (NULL);
	while (i < sizeof(str))
	{
		*(newstr + i) = *(str + i);
		i++;
	}
	return (newstr);
}
