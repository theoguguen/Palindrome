/*
** EPITECH PROJECT, 2021
** B-SYN-200-REN-2-1-palindrome-theo.guguen
** File description:
** n_flag
*/

#include "my.h"

void number(palin_t *palin, int nb)
{
    int i = 0;
    char buff[10];

    palin->nb = nb;
    i = palin->nb;
    while (i != my_int_reverser(i)) {
        i += my_int_reverser(i);
        palin->itt += 1;
    }
    palin->pal = i;
    sprintf(buff, "%d", i);
    if (palin->itt >= palin->imin && palin->itt <= palin->imax) {
        if (palin->base != 10)
            to_deci(palin, buff);
        my_print_color(palin);
    }
    else
        printf("no solution\n");
}