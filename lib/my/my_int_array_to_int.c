/*
** EPITECH PROJECT, 2021
** B-SYN-200-REN-2-1-palindrome-theo.guguen
** File description:
** my_int_to_int_array
*/

#include "lib.h"

int my_int_array_to_int(int len, int *tab)
{
    int nb = 0;

    for (int j = 0; j < len; j++) {
        nb *= 10;
        nb += tab[j];
    }
    return nb;
}