/*
** EPITECH PROJECT, 2021
** CPool
** File description:
** my_strcar
*/

#include "lib.h"

char *my_strcat(char *dest, char *src)
{
    size_t i = my_strlen(dest);
    size_t j = 0;

    for (; src[j]; j++)
        dest[i + j] = src[j];
    dest[i + j] = '\0';
    return dest;
}