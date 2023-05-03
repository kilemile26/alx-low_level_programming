include "main.h"
#include <string.h>

/**
 * count_word - helper function to count the number of words in a string
 * @s: string to evaluate
 * Return: number of words
 * */

#include <stdlib.h>
#include <string.h>

int count_words(char *str)
{
	int count = 0;
	int in_word = 0;
	while (*str)
	{
		if (*str == ' ' || *str == '\t' || *str == '\n')
		{
			in_word = 0;
		}
		else if (!in_word)
		{
			in_word = 1;
			count++;
		}
		str++;
	}
	return count;
}

char **strtow(char *str)
{
	if (!str || !*str) return NULL;

	int word_count = count_words(str);
	char **words = malloc((word_count + 1) * sizeof(char *));
	if (!words) return NULL;

	int i = 0, j = 0;
	while (str[i])
	{
		if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
		{
			str[i++] = '\0';
			continue;
		}
		j = i;
		while (str[j] && str[j] != ' ' && str[j] != '\t' && str[j] != '\n') j++;
		int word_len = j - i;
		words[word_count - count_words(str + i)] = malloc((word_len + 1) * sizeof(char));
		if (!words[word_count - count_words(str + i)]) return NULL;
		strncpy(words[word_count - count_words(str + i)], str + i, word_len);
		words[word_count - count_words(str + i)][word_len] = '\0';

		i = j;
	}
	words[word_count] = NULL;
	return words;
}
