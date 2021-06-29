/*
** EPITECH PROJECT, 2021
** Synthesis
** File description:
** arg
*/

#include "my.h"

static int which_arg(char *arg, char *value, palin_t *palin)
{
    if (value == NULL || my_getnbr(value) < 0)
        return 84;
    switch (arg[1]) {
        case 'n':
            init_nbr(palin, value, 1);
            return 1;
        case 'p':
            init_nbr(palin, value, 2);
            return 1;
        case 'b':
            palin->base = my_getnbr(value);
            return 1;
        default:
            return 84;
    }
    if (palin->base == -84 || palin->nb == -84 || palin->pal == -84)
        return 84;
    return 0;
}

static int which_arg_long(char *arg, char *value, palin_t *palin)
{
    if (value == NULL || my_getnbr(value) < 0)
        quit_program(palin);
    if (my_strcmp(arg, "-imin") == 0) {
        if (my_str_isalpha(value) == 1 || value[0] == '-')
            quit_program(palin);
        palin->imin = my_getnbr(value);
        return 1;
    }
    if (my_strcmp(arg, "-imax") == 0) {
        if (my_str_isalpha(value) == 1 || value[0] == '-')
            quit_program(palin);
        palin->imax = my_getnbr(value);
        return 1;
    }
    if (palin->imin == -84 || palin->imax == -84)
        quit_program(palin);
    return 84;
}

int is_arg(char **av, palin_t *palin)
{
    int ret = 84;

    for (size_t i = 0; av[i]; i++) {
        check_help(av[i], av[i + 1], palin);
        if (av[i][0] == '-' &&  my_strlen(av[i]) == 2)
            ret = which_arg(av[i], av[i + 1], palin);
        if (av[i][0] == '-' && my_strlen(av[i]) == 5)
            ret = which_arg_long(av[i], av[i + 1], palin);
        else if (my_str_isalpha(av[i]) != 0 || (av[i][0] == '-' && ret != 1))
            quit_program(palin);
    }
    if (ret == 84 || number_check(palin) == 84 || is_pal(palin->pal) == 1)
        quit_program(palin);
    return 1;
}