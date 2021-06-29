/*
** EPITECH PROJECT, 2021
** CPool
** File description:
** my
*/

#include <unistd.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

#ifndef LIB_H_
#define LIB_H_

int my_isneg(int n);

int my_putnbr(int nb);

void my_putchar(char c);

void my_swap(int *a, int *b);

void my_putstr(char *str);

int my_strlen(char *str);

int my_getnbr(char *str);

void my_sort_int_array(int *array, int size);

int my_compute_power_rec(int nb, int p);

int my_is_prime(int nb);

int my_find_prime_sup(int nb);

char *my_strcpy(char *dest, char *src);

char *my_strncpy(char *dest, char *src, int n);

char *my_revstr(char *str);

int my_strcmp(char *s1, char *s2);

int my_strncmp(char *s1, char *s2, int n);

char *my_strupcase(char *str);

char *my_strlowcase(char *str);

char *my_strcapitalize(char *str);

int my_str_isalpha(char *str);

int my_str_isnum(char *str);

int my_str_islower(char *str);

int my_str_islower(char *str);

int my_str_isprintable(char *str);

char *my_strcat(char *dest, char *src);

char *my_strncat(char *dest, char *src, int nb);

int my_print_params(char **av);

char **my_sort_params(char **params, int size);

int my_rev_params(int ac, char **av);

char *my_strdup(char *src);

char *my_concat_params(int ac, char **av);

void print_tab(char **tab);

char **my_str_to_word_array(char *str);

int my_is_palindrome(int nb);

int *my_intcpy(int *dest, int *src);

int my_int_array_to_int(int len, int *tab);

#endif
