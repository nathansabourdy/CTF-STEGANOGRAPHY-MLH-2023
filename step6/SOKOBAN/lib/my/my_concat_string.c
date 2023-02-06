/*
** EPITECH PROJECT, 2020
** 
** File description:
** 
*/

#include "my.h"
#include <stddef.h>
#include <stdlib.h>

char *my_concat_string(char *str1, char *str2)
{
    int i = 0;
    int j = 0;
    int k = 0;
    char *str = malloc(sizeof(char) * (my_strlen(str1) + my_strlen(str2) + 1));

    while (str1[i]) {
        str[j] = str1[i];
        i++;
        j++;
    }
    while (str2[k]) {
        str[j] = str2[k];
        j++;
        k++;
    }
    str[j] = '\0';
    return (str);
}