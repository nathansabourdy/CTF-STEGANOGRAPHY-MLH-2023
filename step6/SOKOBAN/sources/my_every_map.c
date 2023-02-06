/*
** EPITECH PROJECT, 2021
** 
** File description:
** 
*/

#include <ncurses.h>
#include <unistd.h>
#include <curses.h>
#include "my.h"
#include <string.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

char *contain_map(char **av)
{
    int fd = open(av[1], O_RDONLY);
    struct stat s;
    stat(av[1], &s);
    int size = s.st_size;
    char *buffer = malloc(sizeof(char) *size +1);
    read(fd, buffer, size);

    buffer[size] = '\0';
    return (buffer);
}

int my_height(char *buffer)
{
    int i = 0;
    int number_n = 0;

    while (buffer[i] != '\0') {
        if (buffer[i] == '\n')
            number_n++;
        i++;
    }
    return (number_n);
}

char **malloc_my_map(char *buffer, int height)
{
    int i = 0;
    int j = 0;
    int k = 0;
    int contain_j = 0;
    char **my_map = malloc(sizeof(char *) * (height + 1));

    for (; buffer[k] != '\0'; k++, i++) {
        for (contain_j = 0; buffer[k] != '\n' && buffer[k] != '\0'; k++) {
            contain_j++;
        }
        my_map[i] = malloc(sizeof(char) * (contain_j + 1));
        my_map[i][contain_j] = '\0';
    }
    my_map[i] = NULL;

    for (i = 0, k = 0; buffer[k] != '\0'; k++, i++) {
        for (j = 0; buffer[k] != '\n' && buffer[k] != '\0'; k++, j++) {
            my_map[i][j] = buffer[k];
        }
    }
    return (my_map);
}

char **my_map_to_win(char **my_map, int height)
{
    int i = 0;
    int j = 0;
    char **copy_my_map = malloc(sizeof(char *) * (height + 1));

    for (i = 0; my_map[i] != NULL ; i++) {
        for (j = 0; my_map[i][j] != '\0'; j++) {
        }
        copy_my_map[i] = malloc(sizeof(char) * (j + 1));
        copy_my_map[i][j] = '\0';
    }
    copy_my_map[i] = NULL;
    for (i = 0; i != height ; i++) {
        for (j = 0; my_map[i][j] != '\0'; j++) {
            copy_my_map[i][j] = my_map[i][j];
            if (my_map[i][j] == 'X')
                copy_my_map[i][j] = ' ';
            if (my_map[i][j] == 'O')
                copy_my_map[i][j] = 'X';
        }
    }
    return (copy_my_map);
}

char **my_map_for_o(char **my_map, int height)
{
    int i = 0;
    int j = 0;
    int o = 0;
    char **copy_my_map = malloc(sizeof(char *) * (height + 1));

    for (i = 0; my_map[i] != NULL ; i++) {
        for (j = 0; my_map[i][j] != '\0'; j++) {
        }
        copy_my_map[i] = malloc(sizeof(char) * (j + 1));
        copy_my_map[i][j] = '\0';
    }
    copy_my_map[i] = NULL;
    for (i = 0; i != height ; i++) {
        for (j = 0; my_map[i][j] != '\0'; j++) {
            copy_my_map[i][j] = my_map[i][j];
        }
    }
    return (copy_my_map);
}