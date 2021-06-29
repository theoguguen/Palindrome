/*
** EPITECH PROJECT, 2021
** CPool
** File description:
** my_strlowcase
*/

#include "lib.h"

char *my_strlowcase(char *str)
{
    for (size_t i = 0; str[i] != '\0'; i++)
        if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] += 32;
    return str;
}