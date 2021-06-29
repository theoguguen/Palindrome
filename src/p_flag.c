/*
** EPITECH PROJECT, 2021
** B-SYN-200-REN-2-1-palindrome-theo.guguen
** File description:
** p_flag
*/

#include "my.h"

static int pali(palin_t *palin)
{
    int i = palin->nb;

    palin->itt = 0;
    while (i != palin->pal) {
        if (i > palin->pal)
            return 1;
        i += my_int_reverser(i);
        if (palin->itt == palin->imax)
            return 1;
        palin->itt += 1;
    }
    if (palin->itt < palin->imin)
        return 1;
    return 0;
}

void pal(palin_t *palin)
{
    int i = 1;
    int passed = 0;

    while (i <= palin->pal) {
        if (palin->nb == palin->pal)
            break;
        palin->nb = i;
        if (pali(palin) == 0) {
            my_print(palin);
            passed += 1;
        }
        i++;
    }
    if (passed == 0)
        printf("no solution\n");
}