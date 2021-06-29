/*
** EPITECH PROJECT, 2021
** B-SYN-200-REN-2-1-palindrome-theo.guguen
** File description:
** my_converter
*/

#include "my.h"

static int array_to_int(int i, int *tab)
{
    int nb = 0;

    for (int j = 0; j < i; j++){
        nb *= 10;
        nb += tab[j];
    }
    return nb;
}

static int *my_rev_int(int *tab, int i, palin_t *palin)
{
    int *temp = malloc(sizeof(int) * i);
    int j = 0;

    if (!temp)
        quit_program(palin);
    for (; i > 0; i--) {
        temp[j] = tab[i - 1];
        j++;
    }
    return temp;
}

void to_base(palin_t *palin, int base, int which_nb)
{
    int i = 0;
    int n = palin->nb;

    for (; n > 0; i++) {
        palin->base_nb[i] = n % base;
        n /= base;
    }
    palin->nb_len = i;
    palin->base_nb = my_rev_int(palin->base_nb, i, palin);
    palin->nb = array_to_int(i, palin->base_nb);
}

static int char_to_nb(char c)
{
    if (c >= '0' && c <= '9')
        return (c - 48);
    else
        return -1;
}

void to_deci(palin_t *palin, char buff[])
{
    int nb = 0;
    int p = 1;
    int pal = 0;

    for (int i = palin->nb_len; i >= 0; i--) {
        nb += palin->base_nb[i] * p;
        p *= palin->base;
    }
    p = 1;
    for (int i = my_strlen(buff); i >= 0; i--) {
        pal += char_to_nb(buff[i]) * p;
        p *= palin->base;
    }
    palin->pal = pal / palin->base + 1;
    palin->nb = nb / palin->base;
}