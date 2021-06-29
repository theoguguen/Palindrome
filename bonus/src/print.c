/*
** EPITECH PROJECT, 2021
** B-SYN-200-REN-2-1-palindrome-theo.guguen
** File description:
** print
*/

#include "my.h"

void my_print(palin_t *palin)
{
    printf("\033[0;36m%d \033[0mleads to ", palin->nb);
    printf("\033[0;36m%d \033[0min ", palin->pal);
    printf("\033[0;33m%d \033[0miteration(s) ", palin->itt);
    printf("in base \033[0;35m%d\n", palin->base);
}