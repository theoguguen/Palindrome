/*
** EPITECH PROJECT, 2021
** CPool
** File description:
** my_strisnum
*/

#include "lib.h"

int my_str_isnum(char *str)
{
    if (str == NULL)
        return 1;
    for (size_t i = 0; str[i] != '\0'; i++)
        if (!(str[i] >= '0' && str[i] <= '9'))
            return 0;
    return 1;
}