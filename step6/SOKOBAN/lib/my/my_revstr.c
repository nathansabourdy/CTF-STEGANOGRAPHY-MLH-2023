/*
** EPITECH PROJECT, 2020
** 
** File description:
** 
*/

#include "my.h"

char *my_revstr(char *str)
{
    int    i = my_strlen(str);

    while (i >= 0) {
        my_putchar(str[i]);
        i--;
    }
    return (0);
}