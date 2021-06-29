/*
** EPITECH PROJECT, 2021
** CPool
** File description:
** my_strncpy
*/

#include "lib.h"

char *my_strncpy(char *dest, char *src, int n)
{
    int len = my_strlen(src);

    for (int i = 0; i < n; i++) {
        if (i == len) {
            dest[i] = '\0';
            return dest;
        }
        dest[i] = src[i];
    }
    return dest;
}