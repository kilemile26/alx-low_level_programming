#include "main.h"

/**
 * str_concat - a function that concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * Return: s0
 */

char *str_concat(char *s1, char *s2)
{
	char *s0;
	int a = 0, b = 0,  i;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	while (s1[a] != '\0')
	{
		a++;
	}
	while (s2[b] != '\0')
	{
		b++;
	}

	s0 = (char *)malloc((a + b + 1) * sizeof(char));

	if (s0 == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < a; i++)
	{
		s0[i] = s1[i];
	}
	for (i = 0; i < b; i++)
	{
		s0[a + i] = s2[i];
	}
	s0[a + b] = '\0';

	return (s0);
}
