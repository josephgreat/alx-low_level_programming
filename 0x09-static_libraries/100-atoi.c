#include "main.h"

/**
 * _atoi - converts string to number
 * @s: string
 * Return: converted string
 */

int _atoi(char *s)
{
	int i, res = 0, sign = 1;

	for (i = 0; s[i] != '\0'; ++i)
	{
		if (s[i] >= '0' && s[i] <= '9')
			res = res * 10 + s[i] - '0';
		if (s[i] == '-' && (s[i + 1] >= 0 && s[i + 1] <= '9'))
			sign = -1;
	}
	return (res * sign);
}
