/*
** EPITECH PROJECT, 2021
** Synthesis
** File description:
** requirement
*/

//#include "my.h"

int my_factrec_synthesis(int nb)
{
    int result = 0;

    if (nb > 12)
        return 0;
    if (nb < 0)
        return 0;
    if (nb == 0 || nb == 1)
        return 1;
    result = nb * my_factrec_synthesis(nb - 1);
    return result;
}

static int check_nb(int nb)
{
    if (nb == 0)
        return 0;
    if (nb < 0)
        return -1;
    if (nb % 1 != 0)
        return (-1);
    return 1;
}

int my_squareroot_synthesis(int nb)
{
    int i = 0;

    if (check_nb(nb) != 1)
        return (check_nb(nb));
    while (i * i != nb) {
        if (i >= nb)
            return -1;
        i++;
    }
    return (i);
}