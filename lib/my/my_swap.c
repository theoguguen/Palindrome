/*
** EPITECH PROJECT, 2021
** CPool
** File description:
** my_swap
*/

void my_swap(int *a, int *b)
{
    int temp = *a;

    *a = *b;
    *b = temp;
}