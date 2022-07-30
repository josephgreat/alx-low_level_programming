#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenate argument passed strings
 * @ac: argument count
 * @av: argument string array
 * Return: NULL is ac is 0 or av is NULL or memory allocation fails
 * else concatenated string
 */

char *argstostr(int ac, char **av)
{
	int i, j, k, totallen = 0;
	char *newstr;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		j = 0;
		while (av[i][j])
			j++;
		totallen += j;
	}
	totallen += ac + 1;
	newstr = malloc(sizeof(char) * totallen);

	if (newstr == NULL)
		return (NULL);

	k = 0;
	for (i = 0; i < ac; i++)
	{
		j = 0;
		while (av[i][j])
		{
			newstr[k] = av[i][j];
			j++;
			k++;
		}
		newstr[k] = '\n';
		k++;
	}
	return (newstr);

}
