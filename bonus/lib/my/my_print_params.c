/*
** EPITECH PROJECT, 2021
** CPool
** File description:
** my_print_params
*/

#include "lib.h"

int my_print_params(char **av)
{
    for (size_t i = 0; av[i]; i++) {
        my_putstr(av[i]);
        my_putchar('\n');
    }
    return 0;
}