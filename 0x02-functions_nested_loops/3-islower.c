#include "main.h"

/**
 * _islower - checks if a character is a lowercase
 * @c: character to be checked
 * Return: 0 if failed or 1 for pass
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
