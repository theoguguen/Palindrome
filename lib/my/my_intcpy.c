/*
** EPITECH PROJECT, 2021
** B-SYN-200-REN-2-1-palindrome-theo.guguen
** File description:
** my_intcpy
*/

#include "lib.h"

int *my_intcpy(int *dest, int *src)
{
    for (size_t i = 0; src[i]; i++)
        dest[i] = src[i];
    return dest;
}