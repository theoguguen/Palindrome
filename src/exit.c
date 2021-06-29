/*
** EPITECH PROJECT, 2021
** B-SYN-200-REN-2-1-palindrome-theo.guguen
** File description:
** exit
*/

#include "my.h"

void quit_program(palin_t *palin)
{
    printf("invalid argument\n");
    free(palin->base_nb);
    free(palin);
    exit(84);
}