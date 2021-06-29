/*
** EPITECH PROJECT, 2021
** CPool
** File description:
** my_putstr
*/

#include "lib.h"

void my_putstr(char *str)
{
    for (size_t i = 0; str[i]; i++)
        my_putchar(str[i]);
}