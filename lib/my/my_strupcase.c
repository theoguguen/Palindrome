/*
** EPITECH PROJECT, 2021
** CPool
** File description:
** my_strupcase
*/

#include "lib.h"

char *my_strupcase(char *str)
{
    for (size_t i = 0; str[i] != '\0'; i++)
        if (str[i] >= 'a' && str[i] <= 'z')
            str[i] -= 32;
    return str;
}