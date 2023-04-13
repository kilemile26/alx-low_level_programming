#include "main.h"

/**
 * _strdup - function used to copy a string
 * @str: pointer to first string
 * Return: 0 or NULL if str = NULL, otherwise returns pointer
 */

char *_strdup(char *str)
{
	char *new;
	int i, u = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[u] != '\0')
	{
		u++;
	}

	new = (char *)malloc(sizeof(char) * u);
	if (str == NULL)
	{
		return (NULL);
	}

	for (i = 0; str[i] != '\0'; i++)
	{
		new[i] = str[i];
	}
	return (new);
}
