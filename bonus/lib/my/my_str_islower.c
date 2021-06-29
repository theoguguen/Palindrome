/*
** EPITECH PROJECT, 2021
** CPool
** File description:
** my_str_islower
*/

#include "lib.h"

int my_str_islower(char *str)
{
    if (str == NULL)
        return 1;
    for (size_t i = 0; str[i] != '\0'; i++)
        if (!(str[i] >= 'a' && str[i] <= 'z'))
            return 0;
    return 1;
}