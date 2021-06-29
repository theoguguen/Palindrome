/*
** EPITECH PROJECT, 2021
** CPool
** File description:
** my_str_isprintable
*/

#include "lib.h"

int my_str_isprintable(char *str)
{
    if (str == NULL)
        return 1;
    for (size_t i = 0; str[i] != '\0'; i++)
        if (str[i] >=  0 || str[i] <=  31 || str[i] == 127)
            return 0;
    return 1;
}