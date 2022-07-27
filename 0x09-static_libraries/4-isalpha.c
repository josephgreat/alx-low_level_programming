#include "main.h"

/**
 * _isalpha - checks if an input is a character
 * @c: character to be checked
 * Return: 0 if failed or 1 for pass
 */

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	else
		return (0);
}
