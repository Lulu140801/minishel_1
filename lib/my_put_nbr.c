/*
** EPITECH PROJECT, 2019
** my_put_nbr
** File description:
** write a number
*/

#include "my.h"

void my_put_nbr(int nb)
{
    if (nb < 0)
    {
        my_putchar('-');
        nb = -nb;
    }
    if (nb > 9)
    {
        my_put_nbr(nb / 10);
        my_put_nbr(nb % 10);
    }
    else
        my_putchar(nb + '0');
}