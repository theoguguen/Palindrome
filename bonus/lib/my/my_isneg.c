/*
** EPITECH PROJECT, 2021
** CPool
** File description:
** my_isneg
*/

#include "lib.h"

int my_isneg(int n)
{
    if (n < 0)
        my_putchar('N');
    else
        my_putchar('P');
    return 0;
}