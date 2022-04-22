#include "main.h"

/**
 * rev_string - reverse of a string
 * @s: string
 * Return: 0
 */

void rev_string(char *s)
{
	int len, i, j;
	char temp;

	len = 0;
	while (*(s + len) != '\0')
		len++;

	i = len - 1;
	j = 0;
	while (i >= len / 2)
	{
		temp = *(s + j);
		*(s + j) = *(s + i);
		*(s + i) = temp;
		i--;
		j++;
	}
}
