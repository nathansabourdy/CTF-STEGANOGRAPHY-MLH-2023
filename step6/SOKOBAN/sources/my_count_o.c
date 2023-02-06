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

int count_o(char **copy_o)
{
    int i = 0;
    int j = 0;
    int o = 0;

    for (i = 0; copy_o[i] != NULL; i++) {
        for (j = 0; copy_o[i][j] != '\0'; j++) {
                if (copy_o[i][j] == 'O')
                    o++;
        }
    }
    return (o);
}