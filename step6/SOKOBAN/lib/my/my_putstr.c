/*
** EPITECH PROJECT, 2020
** my_putstr
** File description:
** 5
*/

#include <unistd.h>
#include "my.h"

int my_putstr(char const *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        my_putchar(str[i]);
        i++;
    }
    return (0);
}