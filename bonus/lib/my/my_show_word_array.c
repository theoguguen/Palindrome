/*
** EPITECH PROJECT, 2021
** CPool
** File description:
** my_show_word_array
*/

#include "lib.h"

void print_tab(char **tab)
{
    for (size_t i = 0; tab[i]; i++) {
        my_putstr(tab[i]);
        my_putchar('\n');
    }
}