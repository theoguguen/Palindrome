/*
** EPITECH PROJECT, 2021
** CPool
** File description:
** my_strcapitalize
*/

#include "lib.h"

char *my_strcapitalize(char *str)
{
    if (str[0] >= 'a' && str[0] <= 'z')
        str[0] -= 32;
    for (size_t i = 1; str[i] != '\0'; i++)
        if (str[i] == ' ' && (str[i + 1] >= 'a' && str[i + 1] <= 'z'))
            str[i + 1] -= 32;
    return str;
}