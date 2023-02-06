/*
** EPITECH PROJECT, 2020
** my_strcmp
** File description:
** 17
*/

#include "my.h"

int stringcmp(char *str)
{
    int    i = 0;

    while (str[i] != '\0') {
        i++;
    }
    return (i);
}

int my_strcmp(char *s1, char *s2)
{
    int    i = 0;

    if (stringcmp(s1) == stringcmp(s2)) {
        while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i]) {
            i++;
        }
        return (s1[i] - s2[i]);
    }
    else {
        return (-1);
    }
}