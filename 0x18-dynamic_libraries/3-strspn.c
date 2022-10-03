#include "main.h"

/**
 * _strspn - gets the length of a substring
 * @s: main string
 * @accept: substring
 * Return: number bytes in @s which consists of @accept
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int c = 0, i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] != 32)
		{
			for (j = 0; accept[j] != '\0'; j++)
			{
				if (s[i] == accept[j])
					c++;
			}
		}
		else
			return (c);
	}
	return (c);
}
