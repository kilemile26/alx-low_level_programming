#include "main.h"

/**
 * *_strchr - function that finds first occurence of c
 * @s: pointer used to point at the character
 * @c: the character to be found
 * Return: a pointer to the first occurrence of the character
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
			s++;
		}
	}
		return (s);
}
