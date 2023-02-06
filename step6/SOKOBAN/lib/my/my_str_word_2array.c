/*
** EPITECH PROJECT, 2021
** 
** File description:
** 
*/

#include "my.h"
#include <unistd.h>
#include <stdlib.h>

int space_begining(char *str)
{
    int i = 0;

    while (str[i] == ' ' || str[i] == '\t')
        i++;
    return (i);
}

int count_word(char *str)
{
    int i = 1;
    int j = 0;

    if (str[0] != ' ' || str[0] != '\t')
        j++;
    while (str[i] != '\0') {
        if (str[i - 1] == ' ' && str[i] != ' ' ||
        str[i - 1] == '\t' && str[i] != '\t')
            j++;
        i++;
    }
    return (j);
}

char **part2(char **arr, char *str)
{
    int i = 0;
    int j = 0;
    int k = space_begining(str);

    while (i != count_word(str)) {
        j = 0;
        while (str[k] != '\0') {
            if (str[k] == ' ' || str[k] == '\t')
                break;
            if (str[k] != ' ' || str[k] != '\t') {
                arr[i][j] = str[k];
                j++;
            }
            k++;
        }
        while (str[k] == ' ' || str[k] == '\t')
            k++;
        i++;
    }
    return (arr);
}

char **my_str_to_word_array(char *str)
{
    char **arr = malloc(sizeof(char *) * (count_word(str) + 1));
    int i = 0;
    int k = space_begining(str);
    int o = 0;

    while (i != count_word(str)) {
        o = 0;
        while (str[k] != '\0') {
            str[k] != ' ' || str[k] != '\t' ? o++ : k == k;
            if (str[k] == ' ' || str[k] == '\t')
                break;
            k++;
        }
        arr[i] = malloc(sizeof(char) * (o + 1));
        arr[i][o] = '\0';
        while (str[k] == ' ' || str[k] == '\t')
            k++;
        i++;
    }
    arr[i] = NULL;
    return (part2(arr, str));
}