/*
** EPITECH PROJECT, 2021
** B-SYN-200-REN-2-1-palindrome-theo.guguen
** File description:
** fichierautre
*/

#include "my.h"

int *my_base_corrector(palin_t *palin, int *tab, int i)
{
    for (int j = 0; j <= i; j++) {
        if ((tab[j] % palin->base) == 0 && tab[j] / palin->base != 1) {
            tab[j] = 0;
            tab[j + 1] += 1;
        }
        if (tab[j + 1] == NULL && (tab[j] % palin->base) == 0
        && tab[j] / palin->base != 1) {
            realloc(tab, i + 1);
            tab[j + 1] = 1;
        }
    }
    return tab;
}