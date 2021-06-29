/*
** EPITECH PROJECT, 2021
** CPool
** File description:
** my_sort_int_array
*/

#include "lib.h"

void my_sort_int_array(int *array, int size)
{
    int temp = 0;

    for (int i = 0; i < size; i++) {
        temp = 0;
        if (array[i] > array[i + 1] && i != size) {
            temp = array[i];
            array[i] = array[i + 1];
            array[i + 1] = temp;
        }
    }
    for (int i = 0; i < size; i++)
        if (array[i] > array[i + 1])
            my_sort_int_array(array, size);
}