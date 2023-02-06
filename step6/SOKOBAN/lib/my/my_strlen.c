/*
** EPITECH PROJECT, 2020
** my_strlen
** File description:
** 6
*/

#include "my.h"

int my_strlen(char *str)
{
    int    i;

    i = 0;
    while (str[i] != '\0')
    {
        i++;
    }
    return (i);
}