/*
** EPITECH PROJECT, 2021
** B-SYN-200-REN-2-1-palindrome-theo.guguen
** File description:
** my_int_reverser
*/

#include "my.h"

int my_int_reverser(int nb)
{
    int rev = 0;
    int j = 0;

    while (nb > 0) {
        j = nb % 10;
        rev = rev * 10 + j;
        nb /= 10;
    }
    return rev;
}