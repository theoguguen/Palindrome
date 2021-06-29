/*
** EPITECH PROJECT, 2021
** CPool
** File description:
** my_is_prime
*/

#include "lib.h"

int my_is_prime(int nb)
{
    int i = nb;

    if (nb < 2)
        return 0;
    for (i = 2; i < nb; i++)
        if (nb % i == 0)
            return 0;
    return 1;
}