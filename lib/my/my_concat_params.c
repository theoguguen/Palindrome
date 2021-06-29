/*
** EPITECH PROJECT, 2021
** CPool
** File description:
** my_concat_params
*/

#include "lib.h"

char *my_strcat2(char *dest, char *src)
{
    int i = 0;
    int j = 0;
    int lend = my_strlen(dest);
    int lens = my_strlen(src);
    char *res = malloc(sizeof(char) * (lend + lens + 4));

    if (!res)
        exit (84);
    while (dest[i] != '\0') {
        res[j] = dest[i];
        i++;
        j++;
    }
    res[j] = '\n';
    j++;
    for (i = 0; src[i] != '\0'; i++) {
        res[j] = src[i];
        j++;
    }
    return (res);
}

static int counter(char **av)
{
    int count = 0;

    for (int i = 0; av[i]; i++)
        count += my_strlen(av[i]);
    return count;
}

char *my_concat_params(int ac, char **av)
{
    char *res = malloc(sizeof(char) * (counter(av)));

    if (!res)
        exit (84);
    if (ac == 1)
        return (av[0]);
    res = av[0];
    for (int i = 1; i < ac; i++)
        res = my_strcat2(res, av[i]);
    return res;
}