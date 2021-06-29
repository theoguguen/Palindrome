/*
** EPITECH PROJECT, 2021
** Synthesis
** File description:
** my
*/

#include "lib.h"

#ifndef MY_H_
#define MY_H_

typedef struct palin_s {
    int nb;
    char *chnb;
    int pal;
    char *chpal;
    int base;
    int imin;
    int imax;
    int itt;
    int *base_nb;
    int *base_pal;
    int nb_len;
    int argc;
    int tmp;
    int i;
}palin_t;

int my_factrec_synthesis(int nb);

int my_squareroot_synthesis(int nb);

int is_arg(char **av, palin_t *palin);

void help(void);

int palindrome(palin_t *palin, char **av);

int my_int_reverser(int nb);

void pal(palin_t *palin);

void number(palin_t *palin, int nb);

void init_nbr(palin_t *palin, char *value, int which);

palin_t *init_struct(palin_t *palin, int argc);

void check_help(char *arg, char *value, palin_t *palin);

int number_check(palin_t *palin);

int is_pal(int pal);

void to_base(palin_t *palin, int base);

void to_deci(palin_t *palin, char buff[]);

void quit_program(palin_t *palin);

void my_print(palin_t *palin);

int *my_base_corrector(palin_t *palin, int *tab, int i);

#endif
