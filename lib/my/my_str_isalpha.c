/*
** EPITECH PROJECT, 2021
** CPool
** File description:
** my_str_isalpha
*/

#include "lib.h"

int my_str_isalpha(char *str)
{
    if (str == NULL)
        return 1;
    for (size_t i = 0; str[i] != '\0'; i++)
        if (!((str[i] >= 'a' && str[i] <= 'z')
        || (str[i] >= 'A' && str[i] <= 'Z')))
            return 0;
    return 1;
}