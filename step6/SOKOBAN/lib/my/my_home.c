/*
** EPITECH PROJECT, 2021
** 
** File description:
** 
*/

#include <stdio.h>
#include <stdlib.h>

char *counting_my_string(int j, char *str)
{
    int i = j;
    int k = 0;
    char *str2;

    while (str[i] != '\0') {
        i++;
    }
    str2 = malloc(sizeof(char) * ((i -j) + 2));
    while (str[j] != '\0') {
        str2[k] = str[j];
        j++;
        k++;
    }
    str2[k] = '/';
    k++;
    return (str2);
}

char *my_home(char **env)
{
    int i = 0;
    int j = 0;

    while (env[i] != NULL) {
        if (env[i][0] == 'H' && env[i][1] == 'O' &&
        env[i][2] == 'M' && env[i][3] == 'E')
        break;
        i++;
    }
    while (env[i][j] != '\0') {
        while (env[i][j] >= 65 && env[i][j] <= 90
        || env[i][j] == '=') {
            j++;
        }
        break;
    }
    return (counting_my_string(j, env[i]));
}