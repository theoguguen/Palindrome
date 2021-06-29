/*
** EPITECH PROJECT, 2021
** Synthesis
** File description:
** main
*/

#include "my.h"

int main(int ac , char **av)
{
    palin_t *palin = malloc(sizeof(palin_t));
    int ret = 0;

    if (!palin)
        return 84;
    palin = init_struct(palin, ac);
    ret = palindrome(palin, av);
    free(palin->base_nb);
    free(palin);
    return ret;
}