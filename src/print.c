/*
** EPITECH PROJECT, 2021
** B-SYN-200-REN-2-1-palindrome-theo.guguen
** File description:
** print
*/

#include "my.h"

void my_print(palin_t *palin)
{
    printf("%d leads to %d in ", palin->nb, palin->pal);
    printf("%d iteration(s) in base %d\n", palin->itt, palin->base);
}