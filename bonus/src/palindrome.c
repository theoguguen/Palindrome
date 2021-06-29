/*
** EPITECH PROJECT, 2021
** B-SYN-200-REN-2-1-palindrome-theo.guguen
** File description:
** palindrome
*/

#include "my.h"

int palindrome(palin_t *palin, char **av)
{
    int i = is_arg(av, palin);

    if (i != 1)
        return i;
    if (palin->chnb != NULL) {
        to_base(palin, palin->base, 1);
        number(palin, palin->nb);
    }
    if (palin->chpal != NULL)
        pal(palin);
    return 0;
}