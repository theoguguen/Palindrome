/*
** EPITECH PROJECT, 2021
** B-SYN-200-REN-2-1-palindrome-theo.guguen
** File description:
** is_palindrome
*/

#include "my.h"

int is_pal(int pal)
{
    int rev = 0;
    int i = pal;
    int j = 0;

    while (i > 0) {
        j = i % 10;
        rev = rev * 10 + j;
        i /= 10;
    }
    if (pal == rev)
        return 0;
    return 1;
}