/*
** EPITECH PROJECT, 2020
** my_strupcase
** File description:
** my_strupcase
*/

#include "./../../include/my.h"

char *my_strupcase(char *str)
{
    for (int i = 0; str[i] != '\0'; i++)
        if (str[i] > 96 && str[i] < 123)
            str[i] -= 32;
    return (str);
}