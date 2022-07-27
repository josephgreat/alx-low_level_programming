#include "main.h"

/**
 * _isdigit - checks if character falls between the range of 0 - 9
 * @c: character to be checked
 * Return: 1 if true; 0 if not
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

