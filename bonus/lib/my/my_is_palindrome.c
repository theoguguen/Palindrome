/*
** EPITECH PROJECT, 2021
** B-SYN-200-REN-2-1-palindrome-theo.guguen
** File description:
** my_is_palindrome
*/

int my_is_palindrome(int nb)
{
    int rev = 0;
    int i = nb;
    int j = 0;

    while (i > 0) {
        j = i % 10;
        rev = rev * 10 + j;
        i /= 10;
    }
    if (nb == rev)
        return 0;
    return 1;
}