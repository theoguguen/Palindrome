/*
** EPITECH PROJECT, 2021
** CPool
** File description:
** my_putnbr
*/

#include "lib.h"

int my_putnbr(int nb)
{
    int n = 0;

    if (nb == -2147483648) {
        my_putstr("-2147483648");
        return 0;
    }
    if (nb < 0) {
        my_putchar('-');
        nb = -nb;
    }
    n = nb % 10 + 48;
    nb = nb / 10;
    if (nb > 0)
        my_putnbr(nb);
    my_putchar(n);
    return 0;
}