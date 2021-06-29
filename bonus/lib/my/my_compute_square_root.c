/*
** EPITECH PROJECT, 2021
** CPool
** File description:
** my_compute_square_root
*/

static int check_nb(int nb)
{
    if (nb <= 0)
        return 0;
    if (nb % 1 != 0)
        return (-1);
    return 1;
}

int my_compute_square_root(int nb)
{
    int i = 0;

    if (check_nb(nb) != 1)
        return (check_nb(nb));
    while (i * i != nb)
        i++;
    return (i);
}