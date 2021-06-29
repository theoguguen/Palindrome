/*
** EPITECH PROJECT, 2021
** CPool
** File description:
** my_compute_power_rec
*/

int my_compute_power_rec(int nb, int p)
{
    int i = 1;

    if (p == 0)
        return 1;
    if (p < 0)
        return 0;
    i = nb * my_compute_power_rec(nb, (p - 1));
    return i;
}