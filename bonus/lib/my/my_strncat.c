/*
** EPITECH PROJECT, 2021
** CPool
** File description:
** my_strncat
*/

#include "lib.h"

char *my_strncat(char *dest, char *src, int nb)
{
    int i = 0;
    int j = 0;

    for (; dest[i] != '\0'; i++);
    while (src[j] != '\0' && j < nb) {
        dest[i + j] = src[j];
        j++;
    }
    dest[i + j] = '\0';
    return dest;
}