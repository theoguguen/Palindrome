/*
** EPITECH PROJECT, 2021
** CPool
** File description:
** my_revstr
*/

#include "lib.h"

char *my_revstr(char *str)
{
    int j = my_strlen(str) - 1;
    int len = my_strlen(str);
    char *temp = malloc(sizeof(char) * j);

    if (!temp)
        return NULL;
    temp = my_strncpy(temp, str, len);
    for (int i = 0; i != len; i++) {
        str[i] = temp[j];
        j--;
    }
    return str;
}