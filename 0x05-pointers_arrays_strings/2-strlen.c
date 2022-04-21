#include "main.h"

/**
 * _strlen - lenght of a string
 * @s: string
 * Return: s
 */

int _strlen(char *s)
{
	char *cp = s;
	while (*cp++)
		;

	return (cp-s-1);
}
