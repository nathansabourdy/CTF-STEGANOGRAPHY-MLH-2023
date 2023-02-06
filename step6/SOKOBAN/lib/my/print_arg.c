/*
** EPITECH PROJECT, 2021
** 
** File description:
** 
*/

#include <stdio.h>
#include <stdlib.h>

int count_space(char **av)
{
    int i = 1;
    int j = 0;
    int k = 0;

    while (av[i][j] != '\0') {
        if (av[i][j] == ' ')
            k++;
        j++;
    }
    return (k);
}

char **print_arg2(char **arg, char **arg2, int spaces)
{
    int i = 1;
    int j = 0;
    int k = 0;
    int m = 0;

    while (k != (spaces + 1)) {
        m = 0;
        while (arg[i][j] != '\0') {
            if (arg[i][j] == ' ')
                break;
            arg2[k][m] = arg[i][j];
            m++;
            j++;
        }
        j++;
        k++;
    }
    return (arg2);
}

char **print_arg(char **arg)
{
    int spaces = count_space(arg);
    char **arg2;
    int i = 1;
    int j = 0;
    int k = 0;
    int m = 0;

    arg2 = malloc(sizeof(char *) * (spaces + 2));
    while (k != (spaces + 1)) {
        while (arg[i][j] != '\0') {
            if (arg[i][j] == ' ')
                break;
            m++;
            j++;
        }
        j++;
        arg2[k] = malloc(sizeof(char) * (m + 1));
        arg2[k][m + 1] = '\0';
        k++;
    }
    return (print_arg2(arg, arg2, spaces));
}