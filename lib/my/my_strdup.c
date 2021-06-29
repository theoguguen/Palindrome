/*
** EPITECH PROJECT, 2021
** CPool
** File description:
** my_strdup
*/

#include "lib.h"

char *my_strdup(char *src)
{
    char *newstr = malloc(sizeof(char) * (my_strlen(src) + 1));
    int i = 0;

    if (!newstr)
        return NULL;
    while (src[i] != '\0') {
        newstr[i] = src[i];
        i++;
    }
    newstr[i] = '\0';
    return newstr;
}