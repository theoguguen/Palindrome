/*
** EPITECH PROJECT, 2021
** CPool
** File description:
** my_find_prime_sup
*/

#include "lib.h"

int my_find_prime_sup(int nb)
{
    if (nb < 2)
        return 0;
    if (my_is_prime(nb) == 1)
        return nb;
    else
        return (my_find_prime_sup(nb + 1));
}