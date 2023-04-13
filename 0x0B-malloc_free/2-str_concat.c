#include "main.h"

/**
 * str_concat - a function that concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * Return: 0
 */

char *str_concat(char *s1, char *s2)
{
	char *s0;
	int a, b,  i;

	if (s1 == NULL)
	{
		a = "";
	}
	if (s2 ==NULL)
	{
		b = "";
	}

	s0 = (char *)malloc((a + b + 1) * sizeof(char));

	if (s0) = '\0')
	{
		return (NULL);
	}

	for ((a && b) = 0; (s1[a] && s2[b]) != '\0'; i++)
		s0[i] = s1[a] + s2[b];
	s0[i] = '\0';

	return (0);
}
