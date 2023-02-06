/*
** EPITECH PROJECT, 2020
** my_strcpy
** File description:
** 13
*/

#include "my.h"

char *my_strcpy(char *dest, char const *src)
{
    int    i = 0;

    while (dest[i] != '\0') {
        dest[i] = src[i];
        i++;
    }
    return (dest);
}