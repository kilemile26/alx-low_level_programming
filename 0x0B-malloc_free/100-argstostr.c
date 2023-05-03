#include "main.h"
#include <stdlib.h>
		
/**
 * argstostr - main entry
 * @ac: int input
 * @av: double pointer array	
 * Return: 0	
 */

#include <stdlib.h>

char *argstostr(int ac, char **av)
{
	int i, j, k, len = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return NULL;

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			len++;
		len++;
	}
	len++;

	str = malloc(len * sizeof(char));
	if (str == NULL)
		return NULL;


	k = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			str[k++] = av[i][j];
		str[k++] = '\n';
	}
	str[k] = '\0';
	return str;
}
