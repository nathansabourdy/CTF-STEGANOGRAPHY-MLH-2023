/*
** EPITECH PROJECT, 2020
** 
** File description:
** 
*/

#include <unistd.h>
#include "my.h"

char *copy(int i, char *str)
{
    if (str[0] >= 97 && str[0] <= 122)
        str[0] = str[0] - 32;
}

char *my_strcapitalize(char *str)
{
    int i = 0;
    char *a;

    while (str[i] != '\0') {
        copy(i, str);
        if (str[i] >= 65 && str[i] <= 90)
            str[i] = str[i] + 32;
        if (str[i] >= 97 && str[i] <= 122 && str[i-1] == ' ') {
            str[i] = str[i] - 32;
        }
        i++;
    }
    return (str);
}