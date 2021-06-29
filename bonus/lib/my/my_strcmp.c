/*
** EPITECH PROJECT, 2021
** CPool
** File description:
** my_strcmp
*/

#include "lib.h"

int my_strcmp(char *s1, char *s2)
{
    for (size_t i = 0; s1[i] != '\0'; i++) {
        if (s1[i] == s2[i])
            continue;
        else
            return 1;
    }
    return 0;
}