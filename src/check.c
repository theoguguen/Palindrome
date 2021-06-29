/*
** EPITECH PROJECT, 2021
** B-SYN-200-REN-2-1-palindrome-theo.guguen
** File description:
** check
*/

#include "my.h"

void check_help(char *arg, char *value, palin_t *palin)
{
    if (value == NULL && my_strcmp(arg, "-h") == 0 && palin->argc == 2) {
        help();
        free(palin);
        exit(0);
    }
}

int number_check(palin_t *palin)
{
    if ((palin->chnb != NULL && palin->chpal != NULL)
    || (palin->chnb == NULL && palin->chpal == NULL))
        return 84;
    if (palin->base <= 1 || palin->base > 10)
        return 84;
    if (palin->imin > palin->imax)
        return 84;
    return 0;
}