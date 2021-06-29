/*
** EPITECH PROJECT, 2021
** B-SYN-200-REN-2-1-palindrome-theo.guguen
** File description:
** init
*/

#include "my.h"

void init_nbr(palin_t *palin, char *value, int which)
{
    if (which == 1) {
        palin->chnb = value;
        palin->nb = my_getnbr(value);
    }
    if (which == 2) {
        palin->chpal = value;
        palin->pal = my_getnbr(value);
    }
}

palin_t *init_struct(palin_t *palin, int ac)
{
    palin->base = 10;
    palin->imin = 0;
    palin->imax = 100;
    palin->itt = 0;
    palin->nb = 0;
    palin->pal = 0;
    palin->argc = ac;
    palin->chpal = NULL;
    palin->chnb = NULL;
    palin->base_nb = malloc(sizeof(int) * 50);
    if (!palin->base_nb)
        quit_program(palin);
    return palin;
}