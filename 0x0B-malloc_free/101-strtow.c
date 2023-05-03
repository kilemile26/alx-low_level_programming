#include "main.h"
#include <stdlib.h>
/**
 * count_word - helper function to count the number of words in a string
 * @s: string to evaluate
 * Return: number of words
 * */

char **strtow(char *str)
{
    char **words;
    int i, j, len, word_count;

    if (str == NULL || *str == '\0')
        return NULL;

    len = strlen(str);

    word_count = 0;
    for (i = 0; i < len; i++) {
        if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
            word_count++;
    }

    words = (char **)malloc((word_count + 1) * sizeof(char *));
    if (words == NULL)
        return NULL;

    j = 0;
    for (i = 0; i < len && j < word_count; i++) {
        if (str[i] != ' ') {
            int start = i;
            while (i < len && str[i] != ' ')
                i++;
            int end = i;
            int word_len = end - start;
            words[j] = (char *)malloc((word_len + 1) * sizeof(char));
            if (words[j] == NULL)
                return NULL;
            strncpy(words[j], &str[start], word_len);
            words[j][word_len] = '\0';
            j++;
        }
    }

    words[j] = NULL;

    return words;
}
