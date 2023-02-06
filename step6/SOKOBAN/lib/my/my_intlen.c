/*
** EPITECH PROJECT, 2020
** my_strlen
** File description:
** 6
*/

#include "my.h"

int my_intlen(int *array)
{
    int i;

    i = 0;
    while (array[i] != '\0')
    {
        i++;
    }
    return i;
}