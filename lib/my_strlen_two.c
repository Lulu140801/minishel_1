/*
** EPITECH PROJECT, 2020
** my_strlen
** File description:
** calculator of the charactere int the string
*/

#include "my.h"

int my_strlen_two(char const *str)
{
    int a = 0;
    int b = 0;

    while (str[a] != '\0') {
        if (str[a] == '\n')
            b++;
        a++;
    }
    return (b + 1);
}