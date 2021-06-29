/*
** EPITECH PROJECT, 2021
** Synthesis
** File description:
** help
*/

#include "my.h"

void help(void)
{
    my_putstr("USAGE\n");
    my_putstr("\t./palindrome -n number -p palindrome [-b base] [-imin i] ");
    my_putstr("[-imax i]\n\n");
    my_putstr("DESCRIPTION\n");
    my_putstr("\t-n n\t  integer to be transformed (>=0)\n");
    my_putstr("\t-p pal    palindromic number to be obtained");
    my_putstr(" (incompatible with the -n \n\t\t  option) (>=0)\n");
    my_putstr("\t\t  if defined, all fitting values of n will be output\n");
    my_putstr("\t-b base   base in which the procedure will be executed ");
    my_putstr("(1<b<=10) [def: 10]\n");
    my_putstr("\t-imin i   minimum number of iterations, included (>=0) ");
    my_putstr("[def: 0]\n");
    my_putstr("\t-imax i   maximum number of iterations, included (>=0) ");
    my_putstr("[def: 100]\n");
}