/*
** EPITECH PROJECT, 2021
** CPool
** File description:
** my_sort_params
*/

char **my_sort_params(char **params, int size)
{
    int i = 0;
    char *temp;

    for (; i < size; i++){
        if (i > 0 && params[i][0] < params[i - 1][0]){
            temp = params[i];
            params[i] = params[i - 1];
            params[i - 1] = temp;
            i -= 2;
        }
    }
    return params;
}