#include "main.h"

/**
 * _isupper - checks if a character is in uppercase
 * @c: character to ASCII format
 * Return: 1 if true, 0 if false
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
