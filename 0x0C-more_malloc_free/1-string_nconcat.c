#include "main.h"

/**
 * *string_nconcat - concatenates n bytes of a string to another string
 * @s1: string to append to
 * @s2: string to concatenate from
 * @n: number of bytes from s2 to concatenate to s1
 * Return: pointer to the resulting string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s0;
	unsigned int a, b;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	a = strlen(s1);
	b = strlen(s2);
	if (n >= b)
		n = b;
	s0 = malloc((a + n + 1) * sizeof(char));
	if (s0 == NULL)
		return (NULL);
	strcpy(s0, s1);
	strncat(s0, s2, n);
	s0[a + n] = '\0';

	return (s0);
}
