/*
** EPITECH PROJECT, 2020
** my_isneg
** File description:
** isneg
*/

#include <unistd.h>
#include "my.h"

int my_isneg(int n)
{
    if (n >= 0)
        my_putchar('P');
    if (n < 0)
        my_putchar('N');
    return (0);
}