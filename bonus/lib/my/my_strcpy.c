/*
** EPITECH PROJECT, 2021
** CPool
** File description:
** my_strcpy
*/

#include "lib.h"

char *my_strcpy(char *dest, char *src)
{
    for (size_t i = 0; src[i] != '\0'; i++)
        dest[i] = src[i];
    return dest;
}