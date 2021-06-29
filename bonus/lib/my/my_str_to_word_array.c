/*
** EPITECH PROJECT, 2021
** CPool
** File description:
** my_str_to_word_array
*/

#include "lib.h"

static int is_word(char *str, size_t i)
{
    if ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z'))
        return 1;
    return 0;
}

static int counter(char *str)
{
    int i = 0;

    for (size_t j = 0; str[j] != '\0'; j++) {
        if (is_word(str, j) == 0)
            i++;
    }
    return i;
}

char **my_str_to_word_array(char *str)
{
    int words = counter(str);
    char **tab = malloc(sizeof(char *) * (words + 1));
    int word_len = 0;
    int j = 0;
    size_t i = 0;

    while (str[i]) {
        if (is_word(str, i) == 1)
            word_len++;
        if (is_word(str, (i + 1)) == 0){
            tab[j] = malloc(sizeof(char) * (word_len + 1));
            my_strncpy(tab[j], &str[i - word_len + 1], word_len);
            word_len = 0;
            j++;
        }
        i++;
    }
    tab[words + 1] = NULL;
    return tab;
}