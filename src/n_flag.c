/*
** EPITECH PROJECT, 2021
** B-SYN-200-REN-2-1-palindrome-theo.guguen
** File description:
** n_flag
*/

#include "my.h"

void number_pal(palin_t *palin)
{
    int b = 1;

    while (palin->i != my_int_reverser(palin->i)) {
        if (palin->itt > palin->imax) {
            printf("no solution\n");
            free(palin->base_nb);
            free(palin);
            exit (0);
        }
        palin->i += my_int_reverser(palin->i) * b;
        palin->itt += 1;
    }
    if (palin->itt < palin->imin) {
        palin->i += my_int_reverser(palin->i);
        palin->itt += 1;
        number_pal(palin);
    }
    palin->pal = palin->i;
}

void number(palin_t *palin, int nb)
{
    char buff[10];
    int b = 1;

    palin->i = palin->nb;
    number_pal(palin);
    sprintf(buff, "%d", palin->i);

    if (palin->itt >= palin->imin && palin->itt <= palin->imax) {
        printf("%d\n", palin->pal);
        to_deci(palin, buff);
        my_print(palin);
    }
    else
        printf("no solution\n");
}