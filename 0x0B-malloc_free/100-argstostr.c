#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of your program
 *
 * @ac: argument counter
 * @av: argument vector
 * Return: pointer to a new string, or NULL if it fails
 */

char *argstostr(int ac, char **av)
{
	char *str;
	int i, j, k = 0;
	int n, m, counter = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			counter++;
	}

	str = malloc(sizeof(char) * counter);
	if (str == NULL)
		return (NULL);

	for (n = 0; n < ac; n++)
	{
		for (m = 0; av[n][m] != '\0'; m++)
		{
			str[k] = av[n][m];
			k++;
		}
		str[k] = '\n';
		k++;
	}
	return (str);
}
