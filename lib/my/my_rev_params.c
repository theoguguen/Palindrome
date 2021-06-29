/*
** EPITECH PROJECT, 2021
** CPool
** File description:
** my_rev_params
*/

#include "lib.h"

int my_rev_params(int ac, char **av)
{
    int i = (ac - 1);

    for (; i >= 0; i--) {
        my_putstr(av[i]);
        my_putchar('\n');
    }
    return 0;
}